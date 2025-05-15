#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n;
int main(){
    priority_queue<ll,vector<ll>,greater<ll>> Q;
    cin >> n;
    for(int i=0;i<n;i++){
        ll x;cin >> x;
        Q.push(x);
    }
    ll ans = 0;

    while(Q.size() > 1){
        //bang 1 thi dung
        ll x = Q.top();Q.pop();
        ll y = Q.top();Q.pop();
        ans += (x+y);
        Q.push(x+y);
    }
    ll s = Q.top();Q.pop();
    cout << ans << " " << s;
}