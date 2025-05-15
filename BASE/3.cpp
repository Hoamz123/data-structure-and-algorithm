#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    ll ans = 0;
    for(int i=0;i<n-1;i++){
        int c = 0,l = 0;
        if(a[i] % 2 == 0) c++;
        else l ++;
        for(int j=i+1;j<n;j++){
            if(a[j] % 2 == 0) c++;
            else l++;
            if(c == l) ans++;
        }
    }
    //ac trau (te)
    cout << ans;
}