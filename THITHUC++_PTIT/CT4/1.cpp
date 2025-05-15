#include<bits/stdc++.h>
using namespace std;
#define ll long long
int mod = 1e9 + 7;
ll p(ll a,ll b){
    if(b==0) return 1;
    ll x = p(a,b/2);
    if(b % 2 == 0){
        return (x * x) % mod;
    }
    return (x * x) % mod * a % mod;
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;cin >> n;
    ll a[n];
    for(int i=0;i<n;i++) cin >> a[i];
    map<ll,ll> mp;
    for(int i=0;i<n;i++){
        ll x = a[i];
        if(x == 0){
            cout << "28tech 0";
            return 0;
        }
        for(ll j=2;j<=sqrt(x);j++){
            while(x % j == 0){
                mp[j]++;
                x /= j;
            }
        }
        if(x != 1) mp[x]++;
    }

    /*for(auto it : mp){
        cout << it.first << " " << it.second << endl;
    }*/

    ll res = 1;int ok = 0;
    for(auto it : mp){
        if(it.second % 2 != 0){
            cout << "29tech";
            ok = 1;
            break;
        }
    }


    if(ok == 0){
        for(auto it : mp){
            ll mu = it.second / 2;
            res *= p(it.first,mu);
            res %= mod;
        }
        cout << "28tech " << res;
    }
//ac
}
