#include <bits/stdc++.h>
#include <iomanip>
using namespace std;
#define ll long long
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;cin >> n;
    for(int i=1;i<=n;i++){
        for(int k=i;k<=n;k++){
            cout << " ";
        }
        for(int j=1;j<=2*i-1;j++){
            cout << j;
            if(j != 2*i - 1) cout << " ";
        }
        cout << endl;
    }
}