#include<bits/stdc++.h>
using namespace std;
string createEmail(string s){
    for(int i=0;i<(int)s.length();i++){
        s[i] = tolower(s[i]);
    }
    stringstream ss(s);
    string tmp;vector<string> v;
    string email = "";
    while(ss >> tmp){
        v.push_back(tmp);
    }
    for(int i=0;i<(int)v.size();i++){
        if(i != (int)v.size() - 1){
            email += v[i][0];//ki tu dau tien
        }
        else{
            email += v[i];
        }
    }
    email += "@gmail.com";
    return email;
}
int main(){
    int t;cin >> t;
    cin.ignore();
    while(t--){
        string s;getline(cin,s);
        string email = createEmail(s);
        cout << email << endl;
    }
}
/*
2
nguyen van MANH
NGuyen THI thuy LiNH

 */