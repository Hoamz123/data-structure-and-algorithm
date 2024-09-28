#include<bits/stdc++.h>
using namespace std;
//to hop lap k cua n la n^k
int n,a[1001],ok;
void ktao(){
    for(int i=1;i<=n;i++){
        a[i] = 1;
    }
}
void sinh(){
    int i = n;
    while(i>=1 && a[i] == n){
        --i;
    }
    if(i==0) ok = 0;
    else{
        a[i]++;
        for(int j=i+1;j<=n;j++){
            a[j] = 1;
        }
    }
}
int main(){
    cin >> n;
    string s = "";vector<string> v;
    for(int i=1;i<=n;i++){
        s += 'A' + i-1;
    }
    do{
        v.push_back(s);
    }while(next_permutation(s.begin(),s.end()));
    for(string x : v){
        ok = 1;ktao();
        while(ok){
            cout << x;
            for(int i=1;i<=n;i++){
                cout << a[i];
            }
            cout << endl;
            sinh();
        }
    }
}
/*
2
AB11
AB12
AB21
AB22
BA11
BA12
BA21
BA22
*/