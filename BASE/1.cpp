#include<bits/stdc++.h>
#define ll long long
using namespace std;
int a[1000001];
int main(){
    int n;cin >> n;
    for(int i=1;i<=n;i++){
        cin >> a[i];
    }
    map<ll,ll> mp;
    for(int i=1;i<=n;i++){
        mp[a[i] % 28] ++;
    }

    ll ans = 0;
    for(int i=1;i<14;i++){
        if(mp.count(i) > 0){
            ans += (mp[i] * mp[28 - i]);
        }
    }

    if(mp.count(0) > 0){
        ans += (mp[0] * (mp[0] - 1)) / 2;
    }
    if(mp.count(14) > 0){
        ans += (mp[14] * (mp[14] - 1)) / 2;
    }
//acc
    cout << ans;
}