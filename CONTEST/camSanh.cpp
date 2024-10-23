#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll fibo[93] = {0};
void fb(){
    fibo[0] = 0;
    fibo[1] = 1;
    for(int i=2;i<=92;i++){
        fibo[i] = fibo[i-1] + fibo[i-2];
    }
}
int cnt[1000001] = {0};
bool check(ll n){
    for(ll x : fibo){
        if(x == n) return true;
    }
    return false;
}
void solve(){
    int dem = 0;
    for(int i=0;i<1001;i++){
        if(check(i)){
            dem++;
        }
        cnt[i] = dem;
    }
}
int main(){
    fb();
    solve();
    int a,b;cin >> a >> b;
    if(a <= 1){
        if(a==0) cout << cnt[b] + 1;
        else cout << cnt[b] - cnt[a-1] + 1 << endl;
    }
    else{
        if(a==0) cout << cnt[b];
        else cout << cnt[b] - cnt[a-1]<< endl;
    }
}