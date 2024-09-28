#include <bits/stdc++.h>
using namespace std;
#define ll long long
/*
//Công thức đồng dư
(A+B) % C = ((A % C) + (B % C)) % C
(A-B) % C = ((A % C) - (B % C) + C) % C
(A*B) % C = ((A % C) * (B % C)) % C
(A^B) % C = (A % C )^B % C;

(A/B) % C = (A%C * B^-1) % C;//nghich dao modun
*/
int mod = 1e9 + 7;

// ll max = 1e18(~~)
//tinh (a^b) % mod
ll powMod(int a,int b){
    ll res = 1;
    a %= mod;
    for(int i=1;i<=b;i++){
        res *= a;
        res %= mod;//bij tran so ll neu bo dong ni
    }
    return res % mod;
}
//tinh so fibonacci thu n (n > lon) % mod

ll fibonacci(int n){
    //chi ap dung cho so fibonacci thu < 1e6 ( 1s may tinh chay het 1e6 vong lap)
    ll fb[n+1];//tao mang co n+1 phan tu
    fb[0] = 0;
    fb[1] = 1;
    for(int i=2;i<=n;i++){
        fb[i] = (fb[i-1])  + (fb[i-2]);
        fb[i] %= mod;
    }
    return fb[n];
}
int main(){
    /*int n;cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    int res = 0;
    //tong cac phan tu trong mang krt au chia cho mod(co san)
    for(int x : a){
        res = res + (x % mod);
        res %= mod;
    }
    cout << res << endl;*/
    //cout << powMod(1000000,1000000);
    cout << fibonacci(100000) << endl;
}