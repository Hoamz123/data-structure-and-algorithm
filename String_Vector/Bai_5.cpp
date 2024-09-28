#include <bits/stdc++.h>
using namespace std;
//dem tan xuat xh cua cac phan tu trong xau
int main(){
    map<char,int> mp;
    string s;
    getline(cin,s);
    for(char c : s){
        mp[c]++;
    }
    /*in theo ttu tu dien
    for(auto it: mp){
        cout << it.first << " " << it.second << endl;
    }*/
    /*in theo trinh tu xuat hien
    for(char c : s){
        if(mp[c] != 0){
            cout << c << " " << mp[c] << endl;
            mp[c] = 0;
        }
    }*/
    //in ra ki tu xuat hien nhieu nhat neu co nhieu ki tu co lan xh = nhau thi in ra kt co thu tu tu dien lon hon
    char rs;
    int m = -1;
    for(auto it: mp){
        if(it.second >= m){
            m = it.second;
            rs = it.first;
        }
    }
    cout << rs << endl;
}