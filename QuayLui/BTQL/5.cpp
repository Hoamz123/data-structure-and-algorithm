#include <bits/stdc++.h>
using namespace std;
int n,m,a[101][101],d[101][101];
int dx[2] = {1,0};
int dy[2] = {0,1};
void ktao(){
    cin >> m >> n;
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cin >> a[i][j];
        }
    }
    memset(d,1,sizeof(d));
}
int cnt = 0;
void Try(int i,int j){
    if(i==m-1 && j==n-1){
        cnt++;
    }
    for(int k=0;k<2;k++){
        int i1 = i + dx[k];
        int j1 = j + dy[k];
        if(i1 >= 0 && i1 <= m-1 && j1 >= 0 && j1 <= n-1 && d[i1][j1]){
            d[i1][j1] = 0;//danh dau la da di qua
            Try(i1,j1);
            d[i1][j1] = 1;//back track
        }
    }
}
int main(){
    ktao();
    Try(0,0);
    cout << cnt << endl;
}
/*
3 5
4 6 8 3 1
9 8 8 9 1
15
*/