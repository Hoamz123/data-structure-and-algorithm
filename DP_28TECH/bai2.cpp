#include<bits/stdc++.h>
using namespace std;
int main(){
    //xau con doi xung lien tuc dai nhat
    ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
    string s;cin >> s;
    int n = s.size();
    s = "@" + s;
    bool f[1001][1001];
    memset(f,false,sizeof(f));
    int ans = 0;
    for(int i=1;i<=n;i++) f[i][i] = true;
    for(int len = 2;len <= n;len ++){
        for(int i=1;i<=n-len+1;i++){
            int j = len + i - 1;
            if(len == 2){
                f[i][j] = (s[i] == s[j]);
            }
            else{
                f[i][j] = (s[i] == s[j] && f[i+1][j-1]);
            }
            if(f[i][j]){
                ans = max(ans,len);
            }
        }
    }
    cout << ans;
}