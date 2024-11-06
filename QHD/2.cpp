#include<bits/stdc++.h>
using namespace std;
int main(){
    int S;cin >> S;
    S /= 10000;
    int f[S+1];//luu so luong to tien nho nhat
    for(int i=1;i<=S;i++) f[i] = 1e9;
    int h[S+1] = {0};//luu so cach doi tien
    int a[6] = {0,2,5,10,20,50};
    f[0] = 0;
    h[0] = 1;
    for(int i=1;i<=5;i++){
        for(int j=1;j<=S;j++){
            if(j >= a[i]){
                f[j] = min(f[j], f[j - a[i]] + 1);
                h[j] += h[j-a[i]];
            }
        }
    }
    cout << h[S] << " ";
    if(f[S] == 1e9) cout << 0;
    else cout << f[S] << " ";
}