#include<bits/algorithmfwd.h>
#include<bits/stdc++.h>
using namespace std;
int mod = 1e9 + 7;
int main(){
    int n;cin >> n;
    int f[n+1] = {0};
    f[0] = 1;
    //f[i] ; so cach tao ra tong  = i
    for(int i=1;i<=n;i++){
        for(int j=1;j<=6;j++){
            if(i >= j){
                f[i] += f[i-j];
                f[i] %= mod;
            }
        }
    }
    cout << f[n];
}