//max product sum
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int mod = 1e9 + 7;
int main(){
    int n;cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    sort(a,a+n);
    ll rs = 0;
    for(int i=0;i<n;i++){
        rs += 1ll * a[i] * i;
        rs %= mod;
    }
    cout << rs;
}