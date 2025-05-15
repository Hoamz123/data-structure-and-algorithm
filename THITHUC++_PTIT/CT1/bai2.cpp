#include<bits/stdc++.h>
using namespace std;
#define ll long long
int a[1000001];
int main(){
    int n,k;cin >> n >> k;

    for(int i=1;i<=n;i++){
        cin >> a[i];
    }
    sort(a+1,a+n+1);
    int m = 1e9;
    for(int i=1;i<=n-k+1;i++){
        m = min(m,a[k-1+i] - a[i]);
    }
    cout << m;
}