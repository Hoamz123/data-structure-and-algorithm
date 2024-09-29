#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll p[1000001];
int n,k,a[1000001];
void ktao(){
    cin >> n >> k;
    for(int i=1;i<=n;i++){
        cin >> a[i];
    }
    p[1] = a[1];
    for(int i=2;i<1000001;i++){
        p[i] = p[i-1] + a[i];
    }
}
int main(){
    ktao();
    while(k--){
        int u,v;cin >> u >> v;
        if(u==0) cout << p[v];
        else{
            cout << p[v] - p[u-1];
        }
        cout << " ";
    }
    return 0;
}