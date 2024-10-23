#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,t;cin >> s >> t;
    int k;cin >> k;
    int x = s.length();
    if((int)t.size() % x != 0){
        cout << "NO";
    }
    else{
        for(int i=0;i<(int)t.size() - x + 1;i+=x){
            if(t.substr(i,x) != s){
                cout << "NO";
                return 0;
            }
        }
        cout << "YES";
    }
}
//kiem tra xem s mu k co = t hay khong 
/*
abc
abcabcabc
3

*/