#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios_base::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);
    freopen("PHANTU.INP", "r", stdin);
    freopen("PHANTU.OUT", "w", stdout);
    string s;cin >> s;
    map<char,int> mp;
    mp['H'] = 1;
    mp['C'] = 12;
    mp['N'] = 14;
    mp['O'] = 16;
    ll ans = 0;
    int tmp = 0;
    for(int i=0;i<(int)s.size();i++){
        if(isalpha(s[i])){
            tmp = 0;
            char h = s[i];
            while(i + 1 < (int)s.size() && isdigit(s[i+1])){
                tmp = tmp * 10 + (s[++i] - '0');
            }
            if(tmp == 0) tmp = 1;
            ans += mp[h] * tmp;
        }
    }
    cout << ans;
}