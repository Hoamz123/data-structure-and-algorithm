#include<bits/stdc++.h>
using namespace std;
#define ll long long
int a[1000001];
map<int,int> mp;
int mod = 1e9 + 7;
int main(){
    int n;cin >> n;
    for(int i=1;i<=n;i++) {
        cin >> a[i];
    }
    ll cnt = 0;
    for(int i=1;i<=n;i++){
        int x = mp[a[i]];
        if(x > 0){
            cnt+=x;
        }
        mp[a[i]]++;
    }
    cout << cnt;
}