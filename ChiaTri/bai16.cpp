#include<bits/stdc++.h>
using namespace std;
#define ll long long
string mau = "";
void dichTrai(string &s){
    char x = s[0];
    for(int i=0;i<(int)s.size() - 1;i++){
        s[i] = s[i+1];
    }
    s[(int)s.size() - 1] = x;
}
int check(string s){
    //TH k can dich
    if(s == mau) return 0;
    for(int i=1;i<(int)s.size();i++){
        dichTrai(s);
        if(s == mau) return i;
    }
    return -1;
}
ll convert(vector<string> v){
    ll res = 0;
    for(int i=0;i<(int)v.size();i++){
        int x = check(v[i]);
        if(x != -1) res += x;
        else return -1;
    }
    return res;
}
int main(){
    int n;cin >> n;
    vector<string> v;
    while(n--){
        string tmp;cin >> tmp;
        v.push_back(tmp);
    }
    mau = v[(int)v.size() - 1];
    v.pop_back();
    cout << convert(v);
}
