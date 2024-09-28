#include<bits/stdc++.h>
using namespace std;
#define ll long long
//chia tao
int n,a[1001],ok,w[1001];
void ktao(){
    for(int i=1;i<=n;i++){
        a[i] = 0;
    }
}
void sinh(){
    int i = n;
    while(i>=1 && a[i] == 1){
        a[i] = 0;
        --i;
    }
    if(i==0) ok = false;
    else a[i] = 1;
}
int main(){
    cin >> n;
    for(int i=1;i<=n;i++){
        cin >> w[i];
    }
    ll res = 1e9;
    ktao();ok = 1;
    while(ok){
        ll sumG1 = 0;
        ll sumG2 = 0;
        for(int i=1;i<=n;i++){
            if(a[i] == 1){
                sumG1 += w[i];
            }
            else{
                sumG2 += w[i];
            }
        }
        res = min(res,abs(sumG1 - sumG2));
        sinh();
    }
    cout << res << endl;
    return 0;
}