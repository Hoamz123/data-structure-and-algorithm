#include<bits/stdc++.h>
using namespace std;
string res = "luyencode";
int cnt = 0;
int main(){
    int len = res.size();
    int n;cin >> n;
    string s;
    for(int i=0;i<n;i++){
        char x;cin >> x;
        s.push_back(x);
    }
    string result = "";
    for(char x : s){
        result.push_back(x);
        int lenR = result.size();
        if(lenR >= len && result.substr(lenR - len) == res){
            cnt++;
            result = "";
        }
    }
    cout << cnt;
}
/*
13
luyencode.com

*/