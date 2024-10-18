#include<bits/stdc++.h>
using namespace std;
// Bai mot : Luy thua nhi phan
#define ll long long
ll lt(int a,int b){
    if(b == 0) return 1;
    ll x = lt(a,b/2);
    if(b % 2 == 1) return x * x * a;
    return x * x;
}
int main(){
    int a,b;cin >> a >> b;
    cout << lt(a,b);
}