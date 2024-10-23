#include<bits/stdc++.h>
using namespace std;
int main(){
    //tim cach doi tien s -> it to tien nhat
    int n,s;cin >> n >> s;
    int a[n+1];
    for(int i=1;i<=n;i++) cin >> a[i];
    int f[1000001];
    for(int i=1;i<=s;i++){
        f[i] = 1e9;
    }
    f[0] = 0;
    for(int i=1;i<=n;i++){
        for(int j=a[i];j<=s;j++){
            f[j] = min(f[j-a[i]] + 1,f[j]);
        }
    }
    if(f[s] == 1e9) cout << -1;
    else cout << f[s];
}