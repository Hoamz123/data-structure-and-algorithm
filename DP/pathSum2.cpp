#include<bits/stdc++.h>
using namespace std;
#define mod 1e9
int n,a[1001][1001];
int dp[1001][1001] = {0};
int main(){
    ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin >> a[i][j];
        }
    }
    for(int i=1;i<=n;i++){
        a[0][i] = -1e9;
        a[n+1][i] = -1e9;
    }
    for(int i=1;i<=n;i++){
        //cot dau tien nhu nhau
        dp[i][1] = a[i][1];
    }
    for(int i = 2;i<=n;i++){
        for(int j=1;j<=n;j++){
            dp[j][i] = max({dp[j-1][i-1],dp[j][i-1],dp[j+1][i-1]}) + a[j][i];
        }
    }
    int res = -1e9;
    for(int i=1;i<=n;i++){
        res = max(res,dp[i][n]);
    }
    cout << res;
}
/*
5
2 -8 2 9 0
-5 6 6 -1 6
3 5 0 2 9
9 -8 9 7 0
-4 6 1 -2 0

40
*/