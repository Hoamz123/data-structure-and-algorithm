#include<bits/stdc++.h>
using namespace std;
int f[3001][3001];
int main(){
    int m,n;cin >> m >> n;
    string a = "@";
    string b = "@";
    for(int i=1;i<=m;i++){
        char x;cin >> x;
        a.push_back(x);
    }
    for(int i=1;i<=n;i++){
        char x;cin >> x;
        b.push_back(x);
    }
    f[0][0] = 0;//base case
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            //case 1
            if(a[i] == b[j]){
                f[i][j] = f[i-1][j-1] + 1;
            }
            //case 2
            else{
                f[i][j] = max(f[i-1][j],f[i][j-1]);
            }
        }
    }
    cout << f[m][n];
}