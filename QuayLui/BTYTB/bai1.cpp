#include<bits/stdc++.h>
using namespace std;
int a[1001][1001],n;
void solve(){
    cin >> n;
    //nhap hang 1
    for(int j=1;j<=n;j++){
        cin >> a[1][j];
    }
    int cot = n-1;
    for(int i=2;i<=n;i++){
        for(int j=1;j<=cot;j++){
            a[i][j] = a[i-1][j] + a[i-1][j+1];
        }
        cot--;
    }
    cot = n;
    for(int i=1;i<=n;i++){
        cout << "[";
        for(int j=1;j<cot;j++){
            cout << a[i][j] << " ";
        }
        cout << a[i][cot] << "]" << endl;
        --cot;
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
2
5
1 2 3 4 5
6
1 2 3 5 4 6

*/