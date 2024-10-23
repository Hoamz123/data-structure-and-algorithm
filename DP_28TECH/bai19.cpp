//[DP]. Bài 19. Đếm số đường đi trong mê cung
#include<bits/stdc++.h>
using namespace std;
int n;int mod = 1e9 + 7;
char a[1001][1001];
int f[1001][1001];
int main(){
    cin >> n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin >> a[i][j];
        }
    }
    memset(f,0,sizeof(f));
    f[0][1] = 1;//mac dinh co 1 cach di vao o [1][1]
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(a[i][j] != '*'){
                f[i][j] = f[i-1][j] + f[i][j-1];
            }
            else{
                f[i][j] = 0;
            }
            f[i][j] %= mod;
        }
    }
    cout << f[n][n];
}