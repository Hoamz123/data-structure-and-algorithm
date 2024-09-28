#include<bits/stdc++.h>
using namespace std;
int main(){
    //chuyen het ki tu in hoa ve in thuong
    string s;getline(cin,s);
    for(int i=0;i<(int)s.length();i++){
        if(isalpha(s[i])){
            s[i] = tolower(s[i]);
        }
    }
    cout << s << endl;
}