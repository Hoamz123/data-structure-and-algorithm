#include<bits/stdc++.h>
using namespace std;
#define ll long long
int m,n;
ll a[501][501];
ll dp[501][501];
int main(){
    cin >> m >> n;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            cin >> a[i][j];
        }
    }
    memset(dp,0,sizeof(dp));
    dp[1][1] = a[1][1];
    for(int j=2;j<=n;j++){
        dp[1][j] = dp[1][j-1] + a[1][j];
    }
    for(int i=2;i<=m;i++){
        dp[i][1] = dp[i-1][1] + a[i][1];
    }
    for(int i=2;i<=m;i++){
        for(int j=2;j<=n;j++){
            dp[i][j] = max(dp[i-1][j],dp[i][j-1]) + a[i][j];
        }
    }
    cout << dp[m][n];
    return 0;
}