#include<bits/stdc++.h>
using namespace std;
int a[101][101];
int n,s,t;
int x[4] = {-1,1,0,0};
int y[4] = {0,0,-1,1};
int rs = 0;

void Try(int i,int j){
    a[i][j] = 1;//danh dau la da di qua
    rs++;

    for(int k=0;k<4;k++){
        int i1 = i + x[k];
        int j1 = j + y[k];
        if(i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= n && a[i1][j1] == 0){
            Try(i1,j1);
        }
    }
}

int main(){
    cin >> n >> s >> t;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin >> a[i][j];
        }
    }
    Try(s,t);
    cout << rs;
    //ac
}