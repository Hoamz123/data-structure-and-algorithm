#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n;ll a[1000001];

int main(){
    cin >> n;
    for(ll i=0;i<n;i++){
        cin >> a[i];
    }
    map<ll,ll> mp;
    for(ll i=0;i<n;i++){
        mp[a[i] % 28] ++;
    }

    ll cnt = 0;

    for(int i=1;i<14;i++){
        cnt += mp[28 - i] * mp[i];
    }

    cnt += (mp[0] * (mp[0] - 1)) / 2;
    cnt += (mp[14] * (mp[14] - 1)) / 2;

    cout << cnt;

}

