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
    for(int i=0;i<n-1;i++){
        int ok = 0;
        for(int j=i+1;j<n;j++){
            if(a[i] < a[j]){
                cout << a[j] << " ";
                ok = 1;
                break;
            }
        }
        if(!ok) cout << -1 << " ";
    }
    cout << -1;
}