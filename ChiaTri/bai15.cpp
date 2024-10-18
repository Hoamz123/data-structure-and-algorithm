#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n;ll k;
struct mt{
    ll m[15][15];
};
int mod = 1e9 + 7;
mt operator*(mt a,mt b){
    mt c;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            c.m[i][j] = 0;
            for(int k=0;k<n;k++){
                c.m[i][j] += ((a.m[i][k] % mod) * (b.m[k][j] % mod)) % mod;
                c.m[i][j] %= mod;
            }
        }
    }
    return c;
}
mt bp(mt a,ll k){
    if(k==1) return a;
    mt x = bp(a,n/2);
    if(k %  2 == 1) return x * x * a;
    return x * x;
}
int main(){
    mt a;
    cin >> n >> k;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> a.m[i][j];
        }
    }
    ll res = 0;
    a = bp(a,k);
    for(int i=0;i<n;i++){
        res += a.m[i][n-1];
        res %= mod;
    }
    cout << res;
    return 0;
}
