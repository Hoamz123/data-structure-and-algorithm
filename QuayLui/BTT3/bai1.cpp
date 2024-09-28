#include<bits/stdc++.h>
using namespace std;
//to hop lap
int n,k;
string s = "";
string tmp;
void ktao(){
    cin >>n >>k;
    cin >> s;
    sort(s.begin(),s.end());
}
void Try(int idx){
    for(int j=idx;j<(int)s.size();j++){
        tmp += s[j];
        if((int)tmp.size() == k){
            cout << tmp << endl;
        }
        else{
            Try(j);
        }
        //back track
        tmp.pop_back();
    }
}
int main(){
    ktao();
    Try(0);
}
/*
4 2
ABCD
AB
AB
AC
AD
BB
BC
BD
CC
CD
DD
*/