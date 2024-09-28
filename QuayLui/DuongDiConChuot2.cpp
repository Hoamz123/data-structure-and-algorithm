#include<bits/stdc++.h>
using namespace std;
int n,a[1001][1001],ok;
string s = "DLRU";string rs;//luuu ket qua cac duong di
void ktao(){
    cin >> n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin >> a[i][j];
        }
    }
}
int dx[4] = {1,0,0,-1};
int dy[4] = {0,-1,1,0};int cnt = 0;
void Try(int i,int j){
    if(i==n && j==n){
        cnt++;
        ok = 1;
        cout << rs << endl;
    }
    for(int k=0;k<4;k++){
        int i1 = i + dx[k];
        int j1 = j + dy[k];
        if(i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= n && a[i1][j1]){
            rs += s[k];
            a[i1][j1] = 0;//danh dau da di qua
            Try(i1,j1);//nhay vao o nay

            //backtrack
            a[i1][j1] = 1;
            rs.pop_back();
        }
    }
}
int main(){
    ktao();ok = 0;
    if(a[1][1] && a[n][n]){
        a[1][1] = 0;//danh dau da di qua
        Try(1,1);
    }
    if(!ok) cout << -1 << endl;
    cout << cnt << endl;
}
/*
4
1 1 1 1
1 1 0 1
1 1 1 1
0 1 1 1

*/