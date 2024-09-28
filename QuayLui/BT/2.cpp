#include<bits/stdc++.h>
using namespace std;
int n,a[100][100],ok;
//dem vung so mot mang hai chieu
/*
if(dx[i]) : gia tri i da duoc dung roi
else gia tri i chua duoc dung
*/
int dx[4] = {1,0,0,-1};
int dy[4] = {0,-1,1,0};
void input(){
    cin >> n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin >> a[i][j];
        }
    }
}
void Try(int i,int j){
    cout << i << " " << j << endl;//xem Try()  loang den dau
    a[i][j] = 0;
    for(int k=0;k<4;k++){
        int i1 = i + dx[k];
        int j1 = j + dy[k];
        if(i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= n && a[i1][j1] == 1){
            Try(i1,j1);//nhay sang o i1,j1
            //neu xuong day tuc la chay xong Try() or Try() ko co duong di 
            //backtrack lai luc nay van o trong vong for cua Try(i,j) ban dau
        }
    }
}
int main(){
    input();
    int cnt = 0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(a[i][j] == 1){
                //la mot o trong mien
                ++cnt;
                Try(i,j);//loang ra cac aco xung quanh
                //ket thuc Try() khi loang het cac o so mot trong mien
            }
        }
    }
    cout << cnt << endl;
}
/*
4
1 0 0 0
1 1 0 1
0 1 0 0
0 0 1 1
output: 3
*/