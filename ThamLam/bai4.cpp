#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n,k,a[1000001];
/*
Chua toi uu
ll sum(int l,int r){
    ll s = 0;
    for(int i=l;i<=r;i++){
        s += a[i];
    }
    return s;
}
int main(){
    cin >> n >> k;
    for(int i=0;i<n;i++) cin >> a[i];
    sort(a,a+n);
    //ll res = max(TH1,TH2);
    ll res = max(abs(sum(0,k-1) - sum(k,n - 1)), abs(sum(0,n-k-1) - sum(n-k,n-1)));
    cout << res << endl;
}*/
int main(){
    cin >> n >> k;int a[n];
    for(int &x : a) cin >> x;
    sort(a,a+n);
    k = min(k,n-k);
    ll sum1 = 0,sum2 = 0;
    for(int i=0;i<n;i++){
        if(i < k) sum1 += a[i];//Nhom co k phan tu
        else sum2 += a[i];//Nhom con lai
    }
    cout << sum2 - sum1;
}