#include<bits/stdc++.h>
using namespace std;
string s;
vector<string> v;

void trans(string &s){
    while(s[0] == '0' && (int)s.size() > 1){
        s = s.substr(1);
    }
}

bool cmp(string a,string b){
    if((int)a.size() != (int)b.size()){
        return (int)a.size() < (int)b.size();
    }
    else{
        return a < b;
    }
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> s;
    for(int i=0;i<(int)s.size();i++){
        if(i < (int)s.size() && isdigit(s[i])){
            string tmp = "";
            while(i < (int)s.size() && isdigit(s[i])){
                tmp.push_back(s[i]);
                ++i;
            }
            trans(tmp);
            v.push_back(tmp);
        }
    }
    sort(v.begin(),v.end(),cmp);
    
    cout << *v.rbegin();
}