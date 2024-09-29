#include<bits/stdc++.h>
using namespace std;
//tim duong di con chuot
int n,a[1001][1001];
string s = "DLRU";
string rs;
void ktao(){
    cin >> n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin >> a[i][j];
        }
    }
}
int ok;
int dx[4] = {1,0,0,-1};
int dy[4] = {0,-1,1,0};
void Try(int i,int j){
    if(i==n && j==n){
        ok = 1;
        cout << rs << endl;
    }
    else{
        for(int k=0;k<4;k++){
            int i1 = i + dx[k];
            int j1 = j + dy[k];
            if(i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= n && a[i1][j1]){
                rs += s[k];
                a[i1][j1] = 0;//danh dau la da di qua
                Try(i1,j1);
                a[i1][j1] = 1;
                rs.pop_back();
            }
        }
    }
}
int main(){
    ktao();ok = 0;
    if(a[1][1] && a[n][n]){
        a[1][1] = 0;
        Try(1,1);
    }
    if(!ok) cout << "NO" << endl;
}