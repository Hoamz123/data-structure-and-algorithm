#include <bits/stdc++.h>
using namespace std;
#define ll long long
//[Chia Và Trị]. Bài 15. Lũy thừa ma trận
int n;ll k;
struct Matrix{
    ll m[15][15];
};
int mod = 1e9 + 7;
Matrix operator * (Matrix a,Matrix b){
    Matrix c;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            c.m[i][j] = 0;
            for(int k=0;k<n;k++){
                c.m[i][j] += ((a.m[i][k] % mod) * (b.m[k][j] % mod)) % mod;
                c.m[i][j] %= mod;
            }
        }
    }
    return c;
}
Matrix bp(Matrix a,ll n){
    if(n==1) return a;
    Matrix x = bp(a,n/2);
    if(n % 2 == 1) return x * x * a;
    return x * x;
}
int main(){
    cin >> n >> k;
    Matrix a;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> a.m[i][j];
        }
    }
    a = bp(a,k);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << a.m[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}