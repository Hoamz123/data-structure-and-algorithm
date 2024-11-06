#include<bits/stdc++.h>
using namespace std;
int mod = 1e6;
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
int main(){
    ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
    /*freopen("DIVGOLD.INP","r",stdin);
    freopen("DIVGOLD.OUT","w",stdout);*/
    int n;cin >> n;
    int a[n+1];
    int sum = 0;
    set<int> s;
    for(int i = 1;i<=n;i++){
        cin >> a[i];
        sum += a[i];
        s.insert(a[i]);
    }
    if((int)s.size() == 1 && n % 2 == 0){
        int x = n / 2;
        cout << 0 << endl;
        cout << toHop(n,x) % mod;
        return 0;
    }
    int tmp = sum;
    int res = 1e9;
    int sumL = 0;
    int target = 1e9;
    for(int i=1;i<=n;i++){
        tmp -= a[i];
        sumL += a[i];
        res = min(res,abs(tmp - sumL));
        target = min({target,tmp,sumL});
    }
    cout << res << endl;
    int f[target + 1] = {0};
    f[0] = 1;
    for(int i=1;i<=n;i++){
        for(int j = target;j >= a[i];j--){
            f[j] += f[j-a[i]];
            f[j] %= mod;
        }
    }
    cout <<  f[target] << endl;
}