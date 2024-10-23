#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll fibo[1001];
void solve(){
    fibo[0] = 0;
    fibo[1] = fibo[2] = 1;
    for(int i=3;i<99;i++){
        fibo[i] = fibo[i-1] + fibo[i-2];
    }
}
int main(){
    solve();
    int n;cin >> n;
    cout << fibo[n];
}