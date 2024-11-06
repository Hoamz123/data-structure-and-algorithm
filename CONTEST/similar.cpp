#include <bits/stdc++.h>
using namespace std;
#define ll long long
int sum(int n){
    int ans = 0;
    while(n){
        ans += n % 10;
        n /= 10;
    }
    return ans;
}
map<int,int> mp;//key = tong cac chu so ( value luu so do)
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("SIMILAR.INP","r",stdin);
    freopen("SIMILAR.OUT","w",stdout);
    //
    int l,r;int res = 0;
    cin >> l >> r;
    for(int i = l;i<=r;i++){
        if(mp.find(sum(i))!=mp.end()){
            res = max(res,i - mp[sum(i)]);
        }
        else mp[sum(i)] = i;
    }
    cout << res;
}
