#include<bits/stdc++.h>
using namespace std;
string s;
set<string> res;
string tmp = "";
void Try(int idx){
    for(char x : {tolower(s[idx]),toupper(s[idx])}){
        tmp += x;
        if((int)tmp.size() == (int)s.size()){
            res.insert(tmp);
        }
        else if((int)tmp.size() < (int)s.size()){
            Try(idx + 1);
        }
        //back track
        tmp.pop_back();
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> s;
    Try(0);
    for(string x : res){
        cout << x << endl;
    }
}