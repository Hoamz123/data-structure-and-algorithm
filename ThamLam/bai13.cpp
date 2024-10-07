// Bài 13. Sắp đặt xâu kí tự
#include<bits/stdc++.h>
using namespace std;
string s;
int main(){
    cin >> s;
    int len = s.size();
    map<char,int> mp;
    for(char x : s){
        mp[x]++;
    }
    //Tim tan xuat xh nhieu nhat
    int M = -100;
    for(auto it : mp){
        M = max(M,it.second);
    }
    if(M <= (len + 1) / 2) cout << "YES";
    else cout << "NO" << endl;
}
/*
aaaabbchchhcccccc
YES
*/