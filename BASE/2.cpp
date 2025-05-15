#include <bits/stdc++.h>
#define ll long long
using namespace std;
bool snt(ll n){
    if(n < 2) return false;
    for(ll i=2;i<=sqrt(n);i++){
        if(n % i == 0) return false;
    }
    return true;
}
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;cin >> n;
    int a[n];
    ll ans = 0;
    for(int i=0;i<n;i++){
        cin >> a[i];
        if(snt(a[i])) ans++;
    }
    for(int i=0;i<n-1;i++){
        ll sum = a[i];
        for(int j=i+1;j<n;j++){
            sum += a[j];
            if(snt(sum)){
                ans++;
            }
        }
    }
    //ac trau (te)
    cout << ans;
}