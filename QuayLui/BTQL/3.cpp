#include <bits/stdc++.h>
using namespace std;
int n,a[1001][1001],ok;
string s = "DLRU";
void ktao(){
    cin >> n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin >> a[i][j];
        }
    }
    ok = 0;
}
string tmp = "";
int dx[4] = {1,0,0,-1};
int dy[4] = {0,-1,1,0};
void Try(int i,int j){
    if(i==n && j == n){
        ok = 1;
        cout << tmp << endl;
    }
    for(int k=0;k<4;k++){
        int i1 = i + dx[k];
        int j1 = j + dy[k];
        if(i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= n && a[i1][j1]){
            tmp += s[k];
            a[i1][j1] = 0;
            Try(i1,j1);
            //back track
            tmp.pop_back();
            a[i1][j1] = 1;
        }
    }
}
int main(){
    ktao();
    if(a[1][1] && a[n][n]){
        a[1][1] = 0;
        Try(1,1);
    }
    if(!ok) cout << -1;
}