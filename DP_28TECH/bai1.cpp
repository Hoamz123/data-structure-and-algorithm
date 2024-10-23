#include<bits/stdc++.h>
using namespace std;
//[DP]. Bài 1. Xâu con chung dài nhất
int main(){
    ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
    string s,t;cin >> s >> t;
    int n = s.size();
    int m = t.size();
    int f[101][101];
    f[0][0] = 0;
    //f[i][j] : set i phan tu dau cua s va j phan tu dau cua t
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(s[i-1] == t[j-1]){
                f[i][j] = f[i-1][j-1] + 1;
            }
            else f[i][j] = max(f[i-1][j],f[i][j-1]);
        }
    }
    cout << f[n][m];
}