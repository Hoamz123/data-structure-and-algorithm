#include<bits/stdc++.h>
using namespace std;
//khai bao cac bien can su dung
int ok;
char c;
string s;
bool nAm(char c){
    return c == 'A' || c == 'E';
}
bool check(){
    for(int i=1;i<(int)s.length()-1;i++){
        if(nAm(s[i])){
            if (!nAm(s[i-1]) && !nAm(s[i+1])){
                return false;
            }
        }
    }
    return true;
}
int main(){
    cin >> c;
    char first = 'A';
    while(first <= c){
        s += first;
        first++;
    }
    do{
        if(check()){
            cout << s << endl;
        }
    }while(next_permutation(s.begin(),s.end()));//ham co sinh de sinh hoan vi
    return 0;
}
/*
D
ABCD
ABDC
ACBD
ACDB
ADBC
ADCB
BCDA
BDCA
CBDA
CDBA
DBCA
DCBA

*/