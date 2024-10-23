#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ///cach mot
    /*string s;cin >> s;
    int n = s.size();
    s = "0" + s;
    ll ans = 0;
    int f[n+1]= {0};
    for(int i=1;i<=n;i++){
        f[i] = f[i-1] * 10 + i * (s[i] - '0');
        ans += f[i];
    }
    cout << ans;*/

    //cach 2: do s.lenth toi da = 13 ki tu
    string s;cin >> s;
    int len = s.size();
    s = "0" + s;
    ll ans = 0;
    for(char x : s) ans += (x-'0');
    for(int i=1;i<len;i++){
        int tmp = s[i] - '0';
        for(int j=i+1;j<=len;j++){
            tmp = tmp * 10 + (s[j] - '0');
            ans += tmp;
        }
    }
    cout << ans;
}