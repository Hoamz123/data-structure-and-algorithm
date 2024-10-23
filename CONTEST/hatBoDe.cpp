#include<bits/stdc++.h>
using namespace std;
#define ll long long
//chuoi hat bo de
vector<string> v;
int cnt(vector<string> v,string res){
    int rs = 0;
    for(string x : v){
        string s = x + x;
        int pos = s.find(res);
        if(pos != (int)string::npos){
            rs += pos;
        }
        else{
            return -1;
        }
    }
    return rs;
}
int main(){
    int n;cin >> n;
    for(int i=0;i<n;i++){
        string s;cin >> s;
        v.push_back(s);
    }
    int ans = 1e9;
    for(int i=0;i<n;i++){
        string res = v[i];
        ans = min(ans,cnt(v,res));
    }
    cout << ans;
}