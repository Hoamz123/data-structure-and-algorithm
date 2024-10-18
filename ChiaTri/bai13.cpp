#include<bits/stdc++.h>
using namespace std;
//[Chia Và Trị]. Bài 13. Dãy xâu nhị phân
#define ll long long
ll len[93];
char x(ll n,ll k){
    if(n==1) return '0';
    if(n==2) return '1';
    if(k <= len[n-2]){
        return x(n-2,k);
    }
    return x(n-1,k - len[n-2]);
}
int main(){
    len[0] = 0;
    len[1] = len[2] = 1;
    for(int i=3;i<=92;i++){
        len[i] = len[i-1] + len[i-2];
    }
    ll n,k;cin >> n >> k;
    cout << x(n,k);
}