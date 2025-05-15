#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    ll ans = 0;
    for(int i=0;i<n;i++){
        ans = 0;
        for(int j=i;j<n;j++){
            ans += a[j];
            cout << ans << " ";
        }
    }
}