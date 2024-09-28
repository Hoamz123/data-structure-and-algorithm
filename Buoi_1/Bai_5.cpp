#include <bits/stdc++.h>
using namespace std;
#define ll long long
int mod = 1e9 + 7;
//Luy thua nhi phan
ll binpow(int a,int b){
    // O(logn);
    if(b==0) return 1;
    ll x = binpow(a, b / 2);
    if(b%2==0) return x*x % mod;
    else return x*x*a % mod;
}
//lam theo nhi phan
ll binpow2(int a,int b){
    // O(logn);
    ll res = 1;
    while(b!=0){
        if(b%2!=0){
            //mu le
            res *= a;
        }
        b/=2;//dich mot bit vd : 10111 -> sau: 1011
        a*=a;
    }
    return res;
}
int main(){
    int a,b;cin >> a >> b;
    cout << binpow(a, b) << endl;
}