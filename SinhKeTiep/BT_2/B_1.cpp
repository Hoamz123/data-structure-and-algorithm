#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<string> res;
int n,ok;
string s;
void ktao(){
    s = string(n,'6');
}
void sinh(){
    int i = n-1;
    while(i>=0 && s[i] == '8'){
        s[i] = '6';
        --i;
    }
    if(i==-1) ok = false;
    else s[i] = '8';
}
void init(){
    for(int i=1;i<=13;i++){
        n = i;//sinh tren day nhi phan co i bit
        ktao();ok = 1;
        while(ok){
            string tmp = s;
            reverse(tmp.begin(),tmp.end());
            res.push_back(s+tmp);
            sinh();
        }
    }
}
int main(){
    init();
    int t;cin >> t;
    while(t--){
        int x;cin >> x;
        for(int i=0;i<x;i++){
            cout << res[i] << " ";
        }
        cout << endl;
    }
}