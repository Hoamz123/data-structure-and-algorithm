#include<bits/stdc++.h>
using namespace std;
#define ll long long
int f[10000001];
void sieve(){
    for(int i=0;i<=10000000;i++){
        f[i] = 1;
    }
    f[0] = f[1] = 0;
    for(int i=2;i<=sqrt(10000000);i++){
        if(f[i]){
            for(int j = i*i;j<=10000000;j+=i){
                f[j] = 0;
            }
        }
    }
}
int sum(int n){
    int res = 0;
    while(n){
        res += n % 10;
        n/=10;
    }
    return res;
}

int main(){
    ios_base::sync_with_stdio(0);cout.tie(0);cin.tie(0);
    freopen("PASSWORD.INP","r",stdin);
    freopen("PASSWORD.OUT","w",stdout);
    sieve();
    int l,r;cin >> l >> r;
    for(int i=l;i<=r;i++){
        if(f[i] && f[sum(i)]) cout << i << " ";
    }
}