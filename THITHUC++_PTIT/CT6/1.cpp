#include<bits/stdc++.h>
using namespace std;
#define ll long long
int mod = 1e9 + 7;
ll f[1000001];
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;cin >> n;

    f[1] = f[2] = 1;

    for(int i=3;i<=n;i++){
        f[i] = 2 * f[i-1] + 3 * f[i-2];
        f[i] %= mod;
    }

    cout << f[n];

}