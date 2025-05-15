#include<bits/stdc++.h>
using namespace std;
string s;
void conv(string &x){
    while(x[0] == '0' && (int)x.size() > 1){
        x = x.substr(1);
    }
}
bool cmd(string a,string b){
    if((int)a.size() != (int)b.size()){
        return (int)a.size() < (int)b.size();
    }
    return a < b;
}
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> s;
    vector<string> v;
    int len = s.size();
    for(int i=0;i<len;i++){
        if(isdigit(s[i]) && i < len){
            string x  = "";
            while (i < len && isdigit(s[i]))
            {
                x.push_back(s[i]);
                ++i;
            }
            v.push_back(x);
        }
    }
    
    for(string &x : v){
        conv(x);
    }
    sort(v.begin(),v.end(),cmd);
    cout << v[(int)v.size()-1];
}