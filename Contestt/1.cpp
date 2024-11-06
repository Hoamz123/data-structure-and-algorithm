#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    freopen("CHIPHI.INP","r",stdin);
    freopen("CHIPHI.OUT","w",stdout);
    int n,x;cin >> n >> x;
    ll ans = 0;
    if(n % 2 == 0){
        ans = 1ll * (n/2) * x;
    }
    else ans = 1ll *  ((n+1) / 2) * x;
    cout << ans;
}