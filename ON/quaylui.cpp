#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n;cin >> n;
    int a[n],b[n];
    int m = 2*n;
    int c[m];
    int start = 0;
    for(int i=0;i<n;i++){
        cin >> a[i];
        c[start ++] = a[i];
    }
    for(int i=0;i<n;i++){
        cin >> b[i];
        c[start ++] = b[i];
    }
    sort(c,c+m);
    for(int x : c) cout << x << " ";
}