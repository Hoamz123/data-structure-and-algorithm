#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("DEMCACH.INP","r",stdin);
    freopen("DEMCACH.OUT","w",stdout);
    int n,k;cin >> n >> k;
    int a[n];
    for(int &x : a) cin >> x;
    ll cnt = 0;int sum = 0;
    int l = 0;
    for(int r=0;r<n;r++){
        sum += a[r];
        while(sum > k){
            sum -= a[l];
            ++l;
        }
        cnt += (r-l+1);
    }
    cout << cnt;
}