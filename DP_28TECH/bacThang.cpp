#include<bits/stdc++.h>
using namespace std;
int mod = 1e9 + 7;
int main(){
    int n,k;cin >> n >> k;
    int f[10001] = {0};
    //f[i] : so cach buoc nen bac thu i
    f[0] = 1;//tai ci tri chan cau thang luon co mot cach buoc
    for(int i=1;i<=n;i++){
        for(int j=1;j<=k;j++){
            if(i >= j){
                f[i] += f[i-j];
                f[i] %= mod;
            }
        }
    }
    cout << f[n];
}