// Max product of two array
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n;
int main(){
    cin >> n;
    int a[n],b[n];
    for(int i=0;i<n;i++) cin >> a[i];
    for(int i=0;i<n;i++) cin >> b[i];
    ll res = 0;
    sort(a,a+n);
    sort(b,b+n);
    for(int i=0;i<n;i++){
        res += 1ll *a[i] * b[i];
    }
    cout << res;
}