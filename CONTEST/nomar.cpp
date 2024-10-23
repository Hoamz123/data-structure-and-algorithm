#include <bits/stdc++.h>
#include <iomanip>
using namespace std;
#define ll long long
ll mod = 1e9;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    freopen("NORMA.INP","r",stdin);
    freopen("NORMA.OUT","w",stdout);
    int n;cin >> n;
    ll a[n];
    for(ll &x : a) cin >> x;
    ll sum = 0;
    for(int i=0;i<n;i++){
        sum += a[i] * a[i];
        sum %= mod;
    }
    for(int i=0;i<n-1;i++){
        priority_queue<int> M;
        priority_queue<int, vector<int>, greater<int>> m;
        M.push(a[i]);
        m.push(a[i]);
        for(int j=i+1;j<n;j++){
            M.push(a[j]);
            m.push(a[j]);
            sum += M.top() * m.top() * (int)M.size();
        }
        sum %= mod;
    }
    cout << sum;
}