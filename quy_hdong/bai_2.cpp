#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
//bai toan  cai tui dp
int main(){
    //tong lon nhat cua cac phan tu trong mang a sao cho <= M
    int n,M;cin >> n >> M;
    int a[n];
    for(int &x : a) cin >> x;
    int dp[M + 1] = {0};
    for(int i=0;i<n;i++){
        for(int j=M;j>=a[i];j--){
            dp[j] = max(dp[j],dp[j-a[i]]+a[i]);
        }
    }
    cout << dp[M] << endl;
}