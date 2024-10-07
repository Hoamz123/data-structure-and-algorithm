// Job Scheduling with Profit
#include<bits/stdc++.h>
using namespace std;
#define ll long long
struct job{
    int id;// id job;
    int dl;//deadline
    int profit;//loi nhuan
};
typedef struct job Job;
int n;
bool cmd(Job a,Job b){
    return a.dl > b.dl;
}
int main(){
    cin >> n;
    vector<Job> v;
    for(int i=0;i<n;i++){
        int x,y,z;cin >> x >> y >> z;
        v.push_back({x,y,z});
    }
    sort(v.begin(),v.end(),cmd);
    priority_queue<int> q;//hang doi uu tien
    int cur_day;//ngay hien tai;
    cur_day = v[0].dl;
    int idx = 0;
    ll res = 0;
    while(cur_day >= 1){
        while( idx < n && v[idx].dl >= cur_day){
            q.push(v[idx].profit);
            idx++;
        }
        if(!q.empty()){
            res += q.top();
            q.pop();
        }
        cur_day--;
    }
    cout << res;
}
/*
4
1 4 20
2 1 40
3 1 10
4 1 30
60
*/