#include<bits/stdc++.h>
using namespace std;
bool check(int n){
    while(n % 2 == 0){
        n /= 2;
    }
    if(n != 1) return false;
    return true;
}
int main(){
    ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("power2.inp","r",stdin);
    freopen("power2.out","w",stdout);
    int n;cin >> n;
    int a[n];
    for(int i=0;i<n;i++) cin >> a[i];
    int ans = 0;
    for(int i=0;i<n-1;i++){
        for(int j = i+1;j<n;j++){
            if(check(a[j] + a[i])){
                ans ++;
            }
        }
    }
    cout << ans;
}