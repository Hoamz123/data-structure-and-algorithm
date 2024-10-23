//tinh to hop chap k cua n
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int c[1001][1001];
int n,k;
void solve(){
    c[1][0] = c[1][1] = 1;
    //trach case hang 0
    for(int i=2;i<=n;i++){
        for(int j=0;j<=i;j++){
            if(j==0 || j==i){
                c[i][j] = 1;
            }
            else{
                c[i][j] = c[i-1][j] + c[i-1][j-1];
            }
        }
    }
}
int main(){
    cin >> n >> k;
    solve();
    cout << c[n][k];
}