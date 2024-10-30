#include<bits/stdc++.h>
using namespace std;
//fibo
#define ll unsigned long long
ll f[93] = {0};
ll fibo(int n){
    if(n<=1) return 1;
    if(f[n] != 0) return f[n];
    f[n] = fibo(n-1) + fibo(n-2);
    return f[n];
}
int main(){
    int t;cin >> t;
    while(t--){
        int n;cin >> n;
        cout << fibo(n) << endl;
    }
}