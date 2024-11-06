#include <bits/stdc++.h>
using namespace std;
#define ll long long
int bs(int a[],int n,int x){
    int l = 0;int r = n-1;
    int idx = -1;
    while(l<=r){
        int m = (l+r) / 2;
        if(a[m] == x){
            idx = m + 1;
            r = m-1;
        }
        else if(a[m] < x){
            l = m+1;
        }
        else r = m-1;
    }
    return idx;
}
ll lt(int a,int b){
    if(b==0) return 1;
    ll x = lt(a,b/2);
    if(b % 2 == 1) return x * x * a;
    return x * x;
}
int main(){
    int n;cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    int m;cin >> m;
    int b[m];
    for(int &x : b) cin >> x;
    ll mu = 0;
    for(int x : b) {
        mu += bs(a,n,x);
    }
    if(mu < 0) cout << 0;
    else cout << 1ll * lt(2,mu);
    return 0;
}