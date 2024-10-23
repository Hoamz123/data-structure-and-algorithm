#include <bits/stdc++.h>
#include <iomanip>
using namespace std;
#define ll long long
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    freopen("DOIXUNG.INP","r",stdin);
    freopen("DOIXUNG.OUP","w",stdout);
    string s;
    //bai o tren group C++
    getline(cin,s);
    map<string,int> mp;
    stringstream ss(s);
    string tmp = "";
    vector<string> v;
    while(ss >> tmp){
        if(mp[tmp] == 0){
            mp[tmp]++;
            v.push_back(tmp);
        }
    }
    int cnt = 0;
    for(string x : v){
        string res = x;
        reverse(res.begin(),res.end());
        if(mp[res] && res != x){
            cnt++;
            mp[x] = 0;
        }
    }
    cout << cnt;
}