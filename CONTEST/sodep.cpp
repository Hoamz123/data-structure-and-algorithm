#include<bits/stdc++.h>
using namespace std;
#define ll long long
//accepted
ll res(int n){
    ll ans = 0;
    while(n){
        ans += (n%10) * (n%10);
        n/=10;
    }
    return ans;
}
bool snt(int res){
    if(res < 2) return false;
    for(int i=2;i<=sqrt(res);i++){
        if(res % i == 0){
            return false;
        }
    }
    return true;
}
vector<int> v;
void solve(){
    for(int i=11;i<99999;i++){
        if(snt(res(i))){
            v.push_back((i));
        }
    }
}
// https://luyencode.net/contest/qh_tin9_2:Link contest
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("BEAUTY.INP", "r", stdin);
    freopen("BEAUTY.OUT", "w", stdout);
    solve();
    sort(v.begin(),v.end());
    int n;
    while(cin >> n){
        cout << v[n-1] << endl;
    }
}