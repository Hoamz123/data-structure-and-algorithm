#include<bits/stdc++.h>
using namespace std;
//BT ma Gray
string Gray(string s){
    string rs = "";
    for(int i=1;i<(int)s.size();i++){
        rs += (s[i-1] ^ s[i]) + '0';
    }
    return rs;
}
int main(){
    int t;cin >> t;
    while(t--){
        string s;cin >> s;
        string gray = (s[0] + Gray(s));
        cout << gray << endl;
    }
}
/*
2
01001
01101

output:
01101
01011

*/