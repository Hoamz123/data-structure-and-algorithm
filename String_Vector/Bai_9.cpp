#include<bits/stdc++.h>
using namespace std;
//kiem tra xau doi xung
bool dx(string s){
    string t = s;
    reverse(s.begin(),s.end());
    if(t==s) return true;
    return false;
}
///cach 2
bool doix(string s){
    int l = 0,r = s.size() - 1;
    while(l<=r){
        if(s[l] != s[r]) return false;
        l++;
        r--;
    }
    return true;
}
int main(){
    string s;getline(cin,s);
    if(doix(s)) cout << "Yes" <<endl;
    else cout << "No" <<endl;
}