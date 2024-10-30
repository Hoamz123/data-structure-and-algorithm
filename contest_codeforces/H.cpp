#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define size 1000000
int n;
ll a[size] = {0};
ll pref[size] = {0};
void sumPrefix(){
    pref[1] = a[1];
    for(int i=2;i<=n;i++){
        pref[i] = pref[i-1] + a[i];
    }
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n;
    for(int i=1;i<=n;i++) cin >> a[i];
    sumPrefix();
    int t;cin >> t;
    while(t--){
        int l,r;cin >> l >> r;
        cout << pref[r] - pref[l-1] << endl;
    }
    return 0;
}