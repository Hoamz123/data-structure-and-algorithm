#include<bits/stdc++.h>
using namespace std;
//[DP]. Bài 20. Maximum Square SPOJ
int n,m,a[1001][1001];
int f[1001][1001];
int main(){
    cin >> n >> m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin >> a[i][j];
        }
    }
    int ans = -1;
    memset(f,0,sizeof(f));
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(a[i][j] == 1){
                if(i == 1 || j == 1){
                    f[i][j] = 1;
                }
                else{
                    if(a[i-1][j-1] && a[i-1][j] && a[i][j-1]){
                        f[i][j] = min({f[i-1][j-1],f[i-1][j],f[i][j-1]}) + 1;
                    }
                }
                ans = max(ans,f[i][j]);
            }
        }
    }
    cout << ans;
}
/*
4 4
1 1 0 0
1 1 1 1
1 1 0 1
1 0 1 0
*/