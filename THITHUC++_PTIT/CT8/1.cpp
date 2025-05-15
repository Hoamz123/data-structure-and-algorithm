#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,k;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n >> k;
    vector<ll> v;
    v.push_back(-1111111);
    for(ll i=2;i<=sqrt(n);i++){
        while(n % i == 0){
            v.push_back(i);
            n/=i;
        }
    }
    if(n != 1) v.push_back(n);
    if((int)v.size() - 1 < k) cout << -1;
    else cout << v[k];
    //ac
}