#include<bits/stdc++.h>
using namespace std;
int f[1001][1001];
int n;
int main(){
    ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
    string s;cin >> s;
    n = s.size();
    s = "@" + s;
    memset(f,false,sizeof(f));
    //base case
    for(int i=1;i<=n;i++) f[i][i] = true;
    int ans = 1;
    for(int len = 2;len<=n;len++){
        for(int i=1;i<=n-len+1;i++){
            int j = i + len - 1;
            if(len == 2){
                f[i][j] = (s[i] == s[j]);
                // f[i][f] = tinh dung sai cua bieu thuc (s[i] == s[j])
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
//f[i][f] : xau con bat dau tu chi so i ket thuc o chi so j (j > i)