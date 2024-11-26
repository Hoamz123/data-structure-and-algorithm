#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;cin >> s;
    map<char,int> mp;
    for(char x : s){
        if(isalpha(x)){
            mp[x]++;
        }
    }
    int ts = -1;
    char x;

    for(auto it : mp){
        if(it.second >= ts){
            ts = it.second;
            x = it.first;
        }
        cout << it.first << it.second;
    }
    
    cout << endl << x << endl;

}