#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll f[1000001];
vector<pair<int,int>> v;
int main(){
    int n,M;cin >> n >> M;
    v.push_back({-1,-1});//de bat dau tu 1
    for(int i=1;i<=n;i++){
        int x,y;cin >> x >> y;
        v.push_back({x,y});
    }
    for(int i=1;i<=n;i++){
        for(int j=M;j>=v[i].first;j--){
            f[j] = 1ll * max(f[j],f[j - v[i].first] + v[i].second);
        }
    }
    cout << f[M];
}