#include<bits/stdc++.h>
using namespace std;
#define ll long long
int mod = 1e9 + 7;
int main(){
    ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;cin >> n;
    int a[n+1];
    for(int i=1;i<=n;i++) cin >> a[i];
    int T[n+1] = {0};int G[n+1] = {0};
    T[1] = 1;
    int res = 0;
    for(int i=2;i<=n;i++){
        if(a[i] >= a[i-1]){
            T[i] = T[i-1] + 1;
        }
        else T[i] = 1;
        res = max(res,T[i]);//case khong xoa phan tu nao
    }
    G[n] = 1;
    for(int i=n-1;i>=1;i--){
        if(a[i] <= a[i+1]){
            G[i] = G[i+1] + 1;
        }
        else G[i] = 1;
    }
    
    a[0] = 0;
    for(int i=1;i<=n;i++){
        if(a[i-1] <= a[i+1]){
            res = max(res,T[i-1] + G[i+1]);
        }
    }
    cout << res;
    return 0;
}
