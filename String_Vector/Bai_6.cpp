#include<bits/stdc++.h>
using namespace std;
int main(){
    //liet ke nhung ki tu xh ca xau a va xau b
    string a,b;
    getline(cin,a);
    getline(cin,b);
    map<char,int> mp;
    for(char c: a){
        mp[c] = 1;
    }
    for(char c : b){
        if(mp[c] == 1){
            mp[c] = 2;
        }
    }
    for(auto it : mp){
        if(it.second == 2){
            cout << it.first ;
        }
    }
}