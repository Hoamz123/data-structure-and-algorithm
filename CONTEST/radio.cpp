#include<bits/stdc++.h>
using namespace std;
string s;
int solve(){
    int n = s.size();
    for(int len = 1;len <= n;len ++){
        string res = s.substr(0,len);
        string tmp = "";
        int k = n / len + 1;
        for(int i=0;i<k;i++){
            tmp += res;
        }
        if(tmp.find(s) != string::npos){
            return len;
        }
    }
    return 0;//ko baoh xuong den day
}
int main(){
    ios_base :: sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("RADIO.INP","r",stdin);
    freopen("RADIO.OUT","w",stdout);
    int n;cin >> n;
    for(int i=0;i<n;i++){
        char x;cin >> x;
        s.push_back(x);
    }
    cout << solve();
}