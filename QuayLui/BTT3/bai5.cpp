#include<bits/stdc++.h>
using namespace std;
string s;int n,ok;
int a[1001];
void ktao(){
    cin >> s;
    n = s.size() - 1;
    for(int i=0;i<n;i++){
        a[i] = 0;
    }
}
void sinh(){
    int i = n;
    while(i>=0 && a[i] == 1){
        a[i] = 0;
        --i;
    }
    if(i==-1) ok = 0;
    else a[i] = 1;
}
vector<string> v;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ktao();ok = 1;
    string tmp = "";
    while(ok){
        tmp = s;
        for(int i=0;i<=n;i++){
            if(a[i] == 1){
                tmp[i] = toupper(tmp[i]);
            }
            else {
                tmp[i] = tolower(tmp[i]);
            }
        }
        if(tmp != s){
            v.push_back(tmp);
        }
        sinh();
    }
    set<string> s;
    for(string x : v){
        s.insert(x);
    }
    for(string x : s){
        cout << x << endl;
    }
}