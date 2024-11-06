#include<bits/stdc++.h>
using namespace std;
#define ll long long
struct job{
    int id;
    int dl;
    int profit;
};
typedef struct job Job;
bool cmd(Job a,Job b){
    return a.dl > b.dl;
}
int main(){
    vector<Job> v;
    int n;cin >> n;
    for(int i=0;i<n;i++){
        int x,y,z;
        cin >> x >> y >> z;
        v.push_back({x,y,z});
    }
    sort(v.begin(),v.end(),cmd);
    priority_queue<int> q;//luu profit lon nhat(de o dau hang doi)
    int cur_day = v[0].dl;
    int idx = 0;
    ll res = 0;
    while(cur_day >= 1){
        while(idx < n && v[idx].dl >= cur_day){
            q.push(v[idx].profit);
            idx++;
        }
        if(!q.empty()){
            res += q.top();//phan tu o dau hang doi (uu tien lon nhat)
            q.pop();//xoa phan tu o dau hang doi
        }
        cur_day--;//giam ngay
    }
    cout << res;
}