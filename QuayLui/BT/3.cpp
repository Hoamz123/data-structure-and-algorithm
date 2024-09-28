#include <bits/stdc++.h>
using namespace std;
int n, a[100][100], ok;
int dx[8] = {-1,-1,-1,0,0,1,1,1};
int dy[8] = {-1,0,1,-1,1,-1,0,1};
//mien so 1 (tinh ca o cheo)
void input(){
    cin >> n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin >> a[i][j];
        }
    }
}
void Try(int i,int j){
    cout << i << " " << j << endl;
    a[i][j] = 0;
    for(int k=0;k<8;k++){
        int i1 = i + dx[k];
        int j1 = j + dy[k];
        if(i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= n && a[i1][j1]){
            Try(i1,j1);
        }
    }
}
int main(){
    input();
    int cnt = 0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(a[i][j]){
                ++cnt;
                Try(i,j);//loang tu a[i][j]
                cout << endl;
            }
        }
    }
    cout << cnt << endl;
}
/*
4
1 0 1 1
1 1 0 1
0 0 1 0
1 1 0 1
output 1
*/