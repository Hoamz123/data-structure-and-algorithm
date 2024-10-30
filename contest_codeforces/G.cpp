#include<bits/stdc++.h>
using namespace std;
int mod = 1e9 + 7;
int f[1001][1001] = {0};
void solve(){
    for(int i=0;i<=1000;i++){
        for(int j=0;j<=i;j++){
            //O(n^2)
            if(j==0 || j==i){
                f[i][j] = 1;
            }
            else{
                f[i][j] = f[i-1][j] + f[i-1][j-1];
            }
            f[i][j] %= mod;
        }
    }
}
int main(){
    ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
    solve();
    int t;cin >> t;
    while(t--){
        int n,k;cin >> n >> k;
        if(k == 0){
            cout << 1 << endl;
        }
        else cout << f[n][k] << endl;
    }
    return 0;
}