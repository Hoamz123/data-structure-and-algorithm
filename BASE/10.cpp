#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin >> n;
    int a[n];
    map<int,int> mp;
    for(int i=0;i<n;i++){
        cin >> a[i];
        mp[a[i]] = 1;
    }
    int t;cin >> t;
    while(t--){
        int x;cin >> x;
        if(mp.count(x) > 0) cout << "YES"<< endl;
        else cout << "NO"<< endl;
    }
}