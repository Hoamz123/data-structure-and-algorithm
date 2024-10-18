#include <bits/stdc++.h>
using namespace std;
#define ll long long
//Bai 5: Xau fibo
#define ll long long
ll n,k;
ll len[93];
char x(ll n,ll k){
    if(n==1) return 'A';
    if(n==2) return 'B';
    if(k <= len[n-2]) return x(n-2,k);
    return x(n-1,k - len[n-2]);
}
int main(){
    len[1] = len[2] = 1;
    for(int i=3;i<93;i++){
        len[i] = len[i-2] + len[i-1];
    }
    int t;cin >> t;
    while(t--){
        cin >> n >> k;
        cout << x(n,k) << endl;
    }
}