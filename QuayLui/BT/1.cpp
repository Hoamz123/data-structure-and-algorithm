#include<bits/stdc++.h>
using namespace std;
int a[100][100],n,ok;
//duong di con chuot
string s;
void input(){
    cin >> n;
    for(int i=1;i<=n;i++){
        for(int  j=1;j<=n;j++){
            cin >> a[i][j];
        }
    }
}
void Try(int i,int j){
    if(i==n && j==n){
        ok = 1;//danh dau la co dap an
        cout << s << endl;
    }
    //4 huong di Dow,Right,Left,Up
    if(i+1 <= n && a[i+1][j] == 1){
        s+= "D";
        a[i+1][j] = 0;//danh dau da di qua
        Try(i+1,j);
        a[i+1][j] = 1;
        s.pop_back();//xoa ki tu cuoi
    }
    if(j-1 >= 1 && a[i][j-1]== 1){
        s+= "L";
        a[i][j-1] = 0;
        Try(i,j-1);
        a[i][j-1] = 1;
        s.pop_back();
    }
    if(j+1 <= n && a[i][j+1] == 1){
        s+= "R";
        a[i][j+1] = 0;
        Try(i,j+1);
        a[i][j+1] = 1;
        s.pop_back();
    }
    if(i-1 >= 1 && a[i-1][j] == 1){
        s += "U";
        a[i-1][j] = 0;
        Try(i-1,j);
        a[i-1][j] = 1;
        s.pop_back();
    }
}
int main(){
    input();
    ok = 0;
    if(a[1][1] && a[n][n]){
        a[1][1] = 0;
        Try(1,1);
    }
    if(!ok){
        //ko co dap
        cout << -1 << endl;
    }
}
