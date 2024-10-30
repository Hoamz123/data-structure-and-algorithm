#include<bits/stdc++.h>
using namespace std;
int mod = 1e9 + 7;
char a[1001][1001];
int f[1001][1001] = {0};
int main(){
    ios_base:: sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;cin >> n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin >> a[i][j];
        }
    }
    if(a[1][1] == '*'){
        cout << 0;
        return 0;
    }
    f[0][1] = 1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(a[i][j] != '*'){
                //de sang o i,j co the di tu o  i,j-1 sang phai or di tu o i-1,j xuong duoi
                f[i][j] = f[i-1][j] + f[i][j-1];
                f[i][j] %= mod;
            }
        }
    }
    cout << f[n][n];
    return 0;
}