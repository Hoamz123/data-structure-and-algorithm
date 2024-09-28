#include<bits/stdc++.h>
using namespace std;
int n,m;char a[1001][1001];int ok,d[1001][1001];
string s = "";
void ktao(){
    cin >> n >> m;
    //n hang ,m cot;
    cin.ignore();
    for(int i = 1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin >> a[i][j];
            d[i][j] = 1;
        }
    }
    ok = 0;
    cin >> s;
}
int dx[4] = {1,0,0,-1};
int dy[4] = {0,1,-1,0};
string tmp = "";
void Try(int i,int j){
    if(ok) return;
    if(tmp == s){
        ok = 1;
        return;
    }
    for(int k=0;k<4;k++){
        int i1 = i + dx[k];
        int j1 = j + dy[k];
        if(i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= m && d[i1][j1]){
            tmp += a[i1][j1];
            d[i1][j1] = 0;//danh dau la da di qua
            if(tmp == s){
                ok = 1;
            }
            else if(s.find(tmp) != string::npos){
                //xau tmp dang hinh thanh la xau con cua s
                Try(i1,j1);//goi de quy
            }
            //back track
            d[i1][j1] = 1;
            tmp.pop_back();
        }
    }
}
int main(){
    ktao();
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(a[i][j] == s[0]){
                memset(d,1,sizeof(d));
                tmp += a[i][j];
                d[i][j] = 0;//danh dau la da duyet qua
                Try(i,j);
                if(ok){
                    cout << "YES" << endl;
                    break;
                }
            }
        }
    }
    if(!ok) cout << "NO" << endl;
}
/*
4 4
ACAC
28B5
1TE5
ABCH
28TECH

// out: YES
*/