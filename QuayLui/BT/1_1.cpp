#include<bits/stdc++.h>
using namespace std;
//me cung con chuot(loang tren mang hai chieu)
int dx[4] = {1,0,0,-1};
int dy[4] = {0,-1,1,0};
int a[100][100],n,ok;
string s;string p = "DLRU";
void input(){
    cin >> n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin >> a[i][j];
        }
    }
}
void Try(int i,int j){
    if(i==n && j==n){
        //den dich
        ok = 1;
        cout << s << endl;
    }
    for(int k=0;k<4;k++){
        int i1 = i + dx[k];
        int j1 = j + dy[k];
        if(i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= n && a[i1][j1] == 1){
            //a[i1][j1] : con nam trong matrix va = 1(co the di duoc)
            s += p[k];//vd : khi k = 0 thi dx[0] = 1,dy[0] = 0;di xuong
            a[i1][j1] = 0;//danh dau la da di qua
            Try(i1,j1);//nhay den o do
            //neu chay xuong day thi chung to o a[i1][j1] : khong di duoc den dich
            a[i1][j1] = 1;//gan lai a[i1][j1] = 1 de con chuot co the di lai
            s.pop_back();//xoa ki tu vua them vao chuoi do huong di nay ko the den dich
        }
    }
}
int main(){
    input();
    if(a[1][1] && a[n][n]){
        a[1][1] = 0;
        Try(1,1);
    }
    if(!ok){
        cout << -1 << endl;
    }
}

