#include<bits/stdc++.h>
using namespace std;
#define ll long long
// Bai 2 : luy thua nhi phan dao
int mod = 1e9 + 7;
ll lt(int a,int b){
    if(b == 0) return 1;
    ll x = lt(a,b/2);
    if(b % 2 == 1) return ((a % mod) * (x * x % mod)) % mod;
    return (x * x) % mod;
}
int main(){
    int a;cin >> a;
    int x = a;
    int y;
    while(a){
        y = y * 10 + a % 10;
        a /= 10;
    }
    cout << lt(x,y);
}