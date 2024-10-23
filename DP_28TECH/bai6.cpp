#include<bits/stdc++.h>
using namespace std;
int f[100001] = {0};
int mod = 1e9 + 7;
//cac phan tu co the dung nhieu lan
int main(){
    int n,s;cin >> n >> s;
    int a[n+1];
    for(int i=1;i<=n;i++) cin >> a[i];
    f[0] = 1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=s;j++){
            if(j >= a[i]){
                f[j] = f[j - a[i]] + f[j];
            }
            f[j] %= mod;
        }
    }
    cout << f[s];
}