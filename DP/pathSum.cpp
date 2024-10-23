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
        for(int j=1;j<=n;j++){
            dp[i][j] = max({dp[i-1][j-1],dp[i-1][j],dp[i-1][j+1]}) + a[i][j];
        }
    }
    int res = *max_element(dp[n] + 1,dp[n] + n + 1);//gia tri lon nhat se lam o hang cuoi cung
    cout << res;
}
/*
5
5 1 8 6 7
6 0 0 3 7
3 4 1 5 3
9 8 9 2 2
5 3 4 5 3
33
*/