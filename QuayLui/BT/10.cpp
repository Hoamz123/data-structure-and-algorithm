#include<bits/stdc++.h>
using namespace std;
int n,k,ok;
string s;
void ktao(){
    cin >> n >> k;
    for(int i=0;i<n;i++){
        char x;cin >> x;
        s+=x;
    }
    sort(s.begin(),s.end());
}
void sinh(){
    int i = k;
    while(i>=0 && s[i] == s[n-1]){
        --i;
    }
    if(i==-1) ok = 0;
    else{
        s[i]++;
        for(int j=i+1;j<k;j++){
            s[j] = s[i];
        }
    }
}
int main(){
    ktao();ok = 1;
    while(ok){
        for(int i=0;i<k;i++){
            cout << s[i];
        }
        cout << endl;
        sinh();
    }
}
/*
4 2
ABCD
AB
AB
AC
AD
BB
BC
BD
CC
CD
DD
*/
