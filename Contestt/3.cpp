#include<bits/stdc++.h>
using namespace std;
#define ll long long
int mod = 1e9 + 7;
ll f[1000001] = {0};//tu ngay 1 den ngay 
int main(){
    ios_base::sync_with_stdio(0);cout.tie(0);cin.tie(0);
    /*freopen("FLASHBACK.INP","r",stdin);
    freopen("FLASHBACK.OUT","w",stdout);*/
    int n,k;cin >> n >> k;
    f[0] = n;
    f[1] = 2*n;f
    for(int i=2;i<=k;i++){
        f[i] = f[i-1] + (i+1) * (i-1) * n;
        f[i] %= mod;
    }
    cout << f[k];
}