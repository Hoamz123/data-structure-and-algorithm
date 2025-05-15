#include<bits/stdc++.h>
using namespace std;
#define ll long long
int mod = 1e9 + 7;
ll f[100001];
ll fibo(int n){
    if(n==1) return 1;
    if(n==2) return 1;
    if(f[n] != 0)  return f[n];
    f[n] = 2 * fibo(n-1) + 3 * fibo(n-2);
    f[n] %= mod;
    return f[n];
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;cin >> n;
    cout << fibo(n);
    //de quy co nho (su dung quy hoach dong tranh case tinh lai nieu lan)
}