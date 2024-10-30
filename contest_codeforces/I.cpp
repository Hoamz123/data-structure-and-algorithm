#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n; cin >> n;
    ll a[n+1];
    ll current_sum = 0;
    ll max_sum = LLONG_MIN;
    for(int i = 1; i <= n; i++) cin >> a[i];
    for(int i = 1; i <= n; i++){
        current_sum = max(a[i], current_sum + a[i]);
        max_sum = max(max_sum, current_sum);
    }
    cout << max_sum;
}
