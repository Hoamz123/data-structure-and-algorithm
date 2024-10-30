#include <bits/stdc++.h>
using namespace std;
int mod = 1e9 + 7;
int main(){
    ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,s;cin >> n >> s;
    int a[n+1];
    int f[s+1] = {0};
    f[0] = 1;//luon luon co 1 cach tao ra tong  = 0
    for(int i=1;i<=n;i++) cin >> a[i];
    for(int i=1;i<=s;i++){
        for(int j=1;j<=n;j++){
            if(i >= a[j]){
                f[i] += f[i-a[j]];
                f[i] %= mod;
            }
        }
    }
    cout << f[s];
}