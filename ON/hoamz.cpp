#include<bits/stdc++.h>
#include<math.h>
using namespace std;
#define ll long long
int m,n,a[1001][1001],d[1001][1001];
void ktao(){
    cin >> m >> n;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            cin >> a[i][j];
            d[i][j] = 1;
        }
    }
}
int dx[2] = {0,1};
int dy[2] = {1,0};
int ok = 0;

int sum = 0;int cnt = 0;
void Try(int i,int j){
    if(i==m && j==n){
        sum = max(sum,cnt);
        ok = 1;
    }
    for(int k=0;k<2;k++){
        int i1 = i + dx[k];
        int j1 = j + dy[k];
        if(i1 >= 1 && i1 <= m && j1 >= 1 && j <= n && a[i1][j1] != -1 && d[i1][j1]){
            d[i1][j1] = 0;//danh dau da di qua
            cnt += a[i1][j1];
            Try(i1,j1);
            //back track
            d[i1][j1] = 1;
            cnt -= a[i1][j1];
        }
    }
}
int main(){
    ktao();
    if(a[1][1] != -1 && a[m][n] != -1){
        d[1][1] = 0;//danh dau di tu o (1,1);
        sum += a[1][1];
        Try(1,1);
    }
    if(!ok) cout << -1;
    else cout << sum << endl;
    
}