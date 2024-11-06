#include<bits/stdc++.h>
using namespace std;
#define ll long long
int ok;
string convert(string s){
    int i = s.size() - 2;
    while(i>=0 && s[i] <= s[i+1]){
        --i;
    }
    if(i == -1) ok = -1;
    else{
        int j = s.size() - 1;
        while(s[i] <= s[j]){
            --j;
        }
        swap(s[i],s[j]);
    }
    if(ok == -1) return "0";
    return s;
}
int main(){
    int t;cin >> t;
    while(t--){
        string s;cin >> s;
        cout << convert(s) << endl;
    }
}