#include <bits/stdc++.h>
using namespace std;
int n,a[1001][1001];
void solve(){
    cin >> n;
    //nhap hang 1
    for(int i=1;i<=n;i++){
        cin >> a[1][i];
    }
    int c = n-1;
    for(int i=2;i<=n;i++){
        for(int j=1;j<=c;j++){
            a[i][j] = a[i-1][j] + a[i-1][j+1];
        }
        --c;
    }
    c = 1;
    for(int i=n;i>=1;i--){
        cout << "[";
        for(int j=1;j<c;j++){
            cout << a[i][j] << " ";
        }
        cout << a[i][c] << "]" << endl;
        ++c;
    }
}
int main(){
    int t;cin >> t;
    while(t--){
        solve();
        cout << endl;
    }
    return 0;
}
/*
1
5
1 2 3 4 5
[48]
[20 28]
[8 12 16]
[3 5 7 9]
[1 2 3 4 5]

*/