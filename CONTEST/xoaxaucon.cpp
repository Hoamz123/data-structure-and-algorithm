#include <bits/stdc++.h>
#include <iomanip>
using namespace std;
#define ll long long
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    /*freopen("CENSOR.INP","r",stdin);
    freopen("CENSOR.OUT","w",stdout);*/
    string s,t;cin >> s >> t;
    int lenT = t.length();
    string res = "";
    for(char x : s){
        res.push_back(x);
        if((int)res.size() > lenT && res.substr((int)res.size() - lenT) == t){
            res.erase((int)res.size() - lenT);
        }
    }
    cout << res;
}
// accepted
//whatthemomooofun