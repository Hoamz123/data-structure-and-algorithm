#include<bits/stdc++.h>
using namespace std;
int main(){
    /*liet ke nhung ki tu chi xuat hien trong xau a ma khong xh trong xau b
    string a,b;
    getline(cin,a);
    getline(cin,b);
    map<char,int >mp;
    for(char c: a){
        mp[c] = 1;//danh dau su ton tai
    }
    for(char c : b){
        if(mp[c] == 1){
            //da duoc danh dau trong xau a(tt trong cau a)
            mp[c] = 0;
        }
    }
    for(auto it: mp){
        if(it.second != 0){
            cout << it.first;
        }
    }*/

    //liet ke nhung ki tu xh o ca hai xau a,b
    string a,b;
    getline(cin,a);
    getline(cin,b);
    map<char,int> mp;
    for(char c : a){
        mp[c] = 1;
    }
    for(char c : b){
        if(mp[c] != 1){
            //chua dc danh dau
            mp[c] = 1;
        }
    }
    for(auto it: mp){
        cout << it.first;
    }
    
}