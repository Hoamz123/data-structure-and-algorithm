#include <bits/stdc++.h>
#include <iomanip>
using namespace std;
#define ll long long
int mod = 1e9 + 10;
bool cmd(pair<int,int> a,pair<int,int> b){
    //tg cho khac nhau
    if(a.second != b.second) return a.second <= b.second;
    else return a.first >= b.first;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("BANK.INP","r",stdin);
    freopen("BANK.OUT","w",stdout);
    int n;cin >> n;
    vector<pair<int,int>> v;
    for(int i=0;i<n;i++){
        int a,t;cin >> a >> t;
        v.push_back({a,t});
    }
    sort(v.begin(),v.end(),cmd);
    int curr_time = 0;
    priority_queue<int,vector<int> ,greater<int>> q;
    for(int i=0;i<n;i++){
        if(curr_time <= v[i].second){
            curr_time ++;
            q.push(v[i].first);
        }
        else{
            int tmp = curr_time;
            tmp -= 1;
            if(tmp == v[i].second){
                int popp = q.top();
                q.pop();//lay phan tu nho nhat ra khoi dinh
                q.push(max(popp,v[i].first));
            }
        }
    }
    ll res = 0;
    while(!q.empty()){
        res += q.top();
        q.pop();
    }
    cout << res;
}