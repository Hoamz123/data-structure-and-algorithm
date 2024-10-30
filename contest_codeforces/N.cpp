#include<bits/stdc++.h>
using namespace std;
#define ll long long
int a[1001][1001];
ll f[1001][1001] = {0};
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,m;cin >> n >> m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin >> a[i][j];
        }
    }
    ll cnt = 0;//dem so hinh vuong lon nhat
    ll ans = 0;//den canh lon nhat

    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(a[i][j]==1){
                if(i==1 || j==1){
                    f[i][j] = 1;
                }
                else{
                    f[i][j] = min({f[i-1][j],f[i-1][j-1],f[i][j-1]}) + 1;
                }
            }
            if(f[i][j] == ans){
                cnt++;
            }
            if(f[i][j] > ans){
                ans = f[i][j];
                cnt = 1;
            }
        }
    }
    cout << ans << " " << cnt;
}