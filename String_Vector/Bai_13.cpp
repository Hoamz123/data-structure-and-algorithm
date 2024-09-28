#include<bits/stdc++.h>
using namespace std;
//chuan hoa ten 
void convert(string &s){
    for(int i=0;i<(int)s.length();i++){
        s[i] = tolower(s[i]);
    }
    stringstream ss(s);
    string tmp;
    string rs = "";
    while(ss >> tmp){
        tmp[0] = toupper(tmp[0]);
        rs += (tmp + " ");
    }
    s = rs.substr(0,rs.length() - 1);
}
int main(){
    int t;cin >> t;
    cin.ignore();
    while(t--){
        string s;getline(cin,s);
        convert(s);
        cout << s << endl;
    }
}