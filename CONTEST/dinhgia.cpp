#include <bits/stdc++.h>
#include<iomanip>
using namespace std;
#define ll long long
int mod = 1e9 + 10;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("DINHGIA.INP","r",stdin);
    freopen("DINHGIA.OUT","w",stdout);
    int n,k;cin >> k >> n;
    int a[n];
    for(int i=0;i<n;i++) cin >> a[i];
    sort(a,a+n);
    map<int,int> mp;
    for(int i=0;i<n;i++){
        if(mp[a[i]] == 0){
            mp[a[i]] = n - i;
        }
    }
    ll res = 0;//luu so tien
    int onlyfan = 0;//luu so quat
    int sotienmotfan = 0;
    for(auto it : mp){
        ll tmp = it.first * it.second;
        int tm = it.second;
        if(tmp > res){
            res = tmp;
            onlyfan = tm;
            sotienmotfan = it.first;
        }
        if(tmp == res){
            if(tm < onlyfan){
                sotienmotfan = it.first;
            }
        }
    }
    cout << sotienmotfan << " " << res;
    return 0;
}