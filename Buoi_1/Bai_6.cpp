#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll toHop(int n,int k){
  int x = max(k,n-k);
    int y = min(k,n-k);
    ll result = 1;
    for(int i=n;i>=x+1;i--){
        result *= i;
    }
    for(int i=2;i<=y;i++){
        result /= i;
    }
    return result;
}
ll chinhHop(int n,int k){
    int x = n-k;
    ll rs = 1;
    for(int i=n;i>=x+1;i--){
        rs *= i;
    }
    return rs;
}
int main(){
    int n,k;cin >> n >> k;
    cout << toHop(n,k) << endl;
    cout << chinhHop(n,k) << endl;
    return 0;
}