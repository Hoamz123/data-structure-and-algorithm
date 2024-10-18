#include <bits/stdc++.h>
using namespace std;
#define ll long long
//[Chia Và Trị]. Bài 12. Số Fibonacci thứ N
// Tìm số Fibonacci thứ N sau khi chia dư kết quả cho 10^9 + 7
// 1<=N<=10^10
int mod = 1e9 + 7;
struct Matrix{
    ll f[2][2];
};
//Nap chong toan tu
Matrix operator * (Matrix a, Matrix b){
    Matrix c;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            c.f[i][j] = 0;
            for(int k=0;k<2;k++){
                c.f[i][j] += ((a.f[i][k] % mod) * (b.f[k][j] % mod)) % mod;
                c.f[i][j] %= mod;
            }
        }
    }
    return c;
}
Matrix fibo(Matrix a,int n){
    if(n==1) return a;
    Matrix x = fibo(a,n/2);
    if(n % 2 == 1) return x * x * a;
    return x * x;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;cin >> n;
    Matrix a;
    a.f[1][1] = 0;
    a.f[0][0] = a.f[0][1] = a.f[1][0] = 1;
    Matrix result = fibo(a,n);
    cout << result.f[1][0] << endl;
}