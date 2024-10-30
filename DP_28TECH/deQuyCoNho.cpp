#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll f[101];
ll fibo(int n){
    if(n==1) return 1;
    if(n==2) return 1;
    if(f[n] != 0)  return f[n];
    f[n] = fibo(n-1) + fibo(n-2);
    return f[n];
}
int main(){
    int n;cin >> n;
    cout << fibo(n);
    //de quy co nho (su dung quy hoach dong tranh case tinh lai nieu lan)
}