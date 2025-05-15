#include<bits/stdc++.h>
using namespace std;

int a[1001][1001];
int p[1001][1001];
int n,m,rs;
int dx[4] = {-1,1,0,0};
int dy[4] = {0,0,-1,1};
void Try(int i,int j){
    //danh dau la di qua
    a[i][j] = 0;
    rs += p[i][j];
    for(int k=0;k<4;k++){
        int i1 = i + dx[k];
        int j1 = j + dy[k];
        if(i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= m && a[i1][j1]){
            Try(i1,j1);
        }
    }
}
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n >> m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin >> a[i][j];
        }
    }


    for(int i=1;i<=n;i++){
        a[i][0] = 0;
        a[i][m+1] = 0;
    }

    for(int i=1;i<=m;i++){
        a[0][i] = 0;
        a[n+1][i] = 0;
    }


    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            //dang o o i,j
            if(!a[i-1][j]) p[i][j]++;
            if(!a[i+1][j]) p[i][j]++;
            if(!a[i][j-1]) p[i][j]++;
            if(!a[i][j+1]) p[i][j]++;
        }
    }

    int res = -10000;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(a[i][j]){
                rs = 0;
                Try(i,j);
                res = max(rs,res);
            }
        }
    }
    cout << res;
}