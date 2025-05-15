#include<bits/stdc++.h>
using namespace std;
int n;
int a[1001][1001];

int f[1001][1001];

int main(){
    cin >> n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin >> a[i][j];
            f[i][j] = 0;
        }
    }

    for(int i=1;i<=n;i++){
        a[0][i] = -100000000;
        a[i][0] = -100000000;
        a[n + 1][i] = -100000000;
    }

    for(int i=1;i<=n;i++){
        f[i][1] = a[i][1];
    }
    //cot i,hang j
    for(int i=2;i<=n;i++){
        for(int j=1;j<=n;j++){
            f[j][i] = max({f[j-1][i-1],f[j][i-1],f[j+1][i-1]}) + a[j][i];
        }
    }
    
    int c = -10000;
    for(int i=1;i<=n;i++){
        c = max(c,f[i][n]);
    }
    cout << c;
//ac
}