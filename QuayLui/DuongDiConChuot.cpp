#include<bits/stdc++.h>
using namespace std;
int n,a[1001][1001],dx[1001],ok;
void ktao(){
    cin >> n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin >> a[i][j];
        }
    }
}
string s;
void Try(int i,int j){
    if(i==n && j==n){
        //den dich
        ok = 1;
        cout << s << endl;
    }
    if(i+1 <= n && a[i+1][j] == 1){
        s += "D";
        a[i+1][j] = 0;//danh dau la da di qua(chua di qua thi = 1)
        Try(i+1,j);

        a[i+1][j] = 1;
        s.pop_back();

    }
    if(j+1 <= n && a[i][j+1] == 1){
        s += "R";
        a[i][j+1] = 0;
        Try(i,j+1);

        a[i][j+1] = 1;
        s.pop_back();
    }
}
int main(){
    ktao();ok = 0;
    if(a[1][1] && a[n][n]){
        Try(1,1);
    }
    if(!ok){
        cout << -1 << endl;
    }
}
/*
4
1 1 0 1
1 1 1 1
1 0 1 1
1 1 1 1

output:
DDDRRR
DRRDDR
DRRDRD
DRRRDD
RDRDDR
RDRDRD
RDRRDD


*/