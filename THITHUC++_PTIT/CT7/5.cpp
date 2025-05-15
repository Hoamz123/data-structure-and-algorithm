#include<bits/stdc++.h>
using namespace  std;
#define ll long long
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll n,x;
    cin >> n >> x;
    ll cnt = 0;
    for(ll i=1;i<=sqrt(x);i++){
        if(x % i == 0){
            if(i <= n && (x / i) <= n){
                cnt += 2;
            }
            if(i == (x / i)){
                cnt--;
            }
        }
    }
    cout << cnt;
    //ac
}