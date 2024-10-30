#include<bits/stdc++.h>
using namespace std;
int f[3001][3001] = {0};
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    string s,t;cin >> s >> t;
    f[0][0] = 0;
    //f[i][j]:so ki tu chung nhieu nhat xet tren i phan tu dau cua xau s va j  phan tu dau cua xau t
    int lenS = s.size();
    int lenT = t.size();
    for(int i=1;i<=lenS;i++){
        for(int j=1;j<=lenT;j++){
            if(s[i-1] == t[j-1]){
                f[i][j] = f[i-1][j-1] + 1;
            }
            else{
                f[i][j] = max(f[i-1][j],f[i][j-1]);
            }
        }
    }
    cout << f[lenS][lenT];
}