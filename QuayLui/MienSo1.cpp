#include<bits/stdc++.h>
using namespace std;
int n,a[1001][1001],cnt;
int dx[4] = {1,0,0,-1};
int dy[4] = {0,-1,1,0};
void ktao(){
    cin >> n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin >> a[i][j];
        }
    }
}
void Try(int i,int j){
    a[i][j] = 0;//danh dau da xet
    for(int k=0;k<4;k++){
        int i1 = i + dx[k];
        int j1 = j + dy[k];
        if(i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= n && a[i1][j1]){
            Try(i1,j1);
        }
    }
}
int main(){
    ktao();cnt = 0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(a[i][j]){
                cnt++;
                Try(i,j);//de loang het cac o so mot cung mien
            }
        }
    }
    cout << cnt << endl;
}
/*

5
1 0 1 1 0
1 1 0 1 0
1 0 1 1 0
1 1 1 1 0
0 1 0 0 1
out:2
*/