#include<bits/stdc++.h>
using namespace std;
int w[101] = {0};
int f[1001][1001] = {0};
int main(){
    int C,n;cin >> C >> n;
    for(int i=1;i<=n;i++) cin >> w[i];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=C;j++){
            if(j >= w[i]){
                f[i][j] = max(f[i-1][j],f[i-1][j - w[i]] + w[i]);
            }
        }
    }
    cout << f[n][C];
}