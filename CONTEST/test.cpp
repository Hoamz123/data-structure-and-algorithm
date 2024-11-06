#include<bits/stdc++.h>
using namespace std;
//8/20
int main(){
    ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("STRGAME.INP","r",stdin);
    freopen("STRGAME.OUT","w",stdout);
    int n,k;cin >> n >> k;
    string s;cin >> s;
    string ans = "";
    set <char> se;
    sort(s.begin(),s.end());
    if(k==n) {cout << s[(int)s.size() - 1];return 0;}
    for(char x: s){
        se.insert(x);
    }
    if((int)se.size() == 1){
        int len = s.size();
        if(len % k == 0){
            cout << s.substr(0,len / k);
        }
        else cout << s.substr(0,1 + len / k);
        return 0;
    }
    vector<char> xx;
    for(char x : se){
        xx.push_back(x);
    }
    cout << xx[(int)xx.size() - 2] << xx[(int)xx.size() - 1];
}