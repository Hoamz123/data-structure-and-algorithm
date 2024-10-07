#include<bits/stdc++.h>
using namespace std;
#define ll long long
int mod = 1e9 + 7;
int main(){
    int n;cin >> n;
    ll a[n];
    for(ll &x : a) cin >> x;
    ll res = 0;
    priority_queue<ll> q;
    for(int x : a) q.push(x);
    while((int)q.size() > 1){
        ll x = q.top();q.pop();
        ll y = q.top();q.pop();
        ll cost = 1ll * (x + y);
        res += cost;res %= mod;
        q.push(cost);
    }
    cout << res;
}