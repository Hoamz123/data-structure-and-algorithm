#include<bits/stdc++.h>
using namespace std;
int k,ok;char c;
char a[1001];
void ktao(){
    for(int i=1;i<=k;i++){
        a[i] = 'A';
    }
}
void sinh(){
    int i = k;
    while(i>=1 && a[i] == c){//c la ki tu cuoi cung(ki tu lon nhat ma a[i] co the dat duoc)
        --i;
    }
    if(i==0) ok = false;
    else{
        a[i]++;
        for(int j=i+1;j<=k;j++){
            a[j] = a[i];
        }
    }
}
int main(){
    cin >> c >> k;
    ktao();ok = 1;
    while(ok){
        for(int i=1;i<=k;i++){
            cout << a[i];
        }
        cout << endl;
        sinh();
    }
    return 0;
}
/*
intput:
D 2

out:
AA
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