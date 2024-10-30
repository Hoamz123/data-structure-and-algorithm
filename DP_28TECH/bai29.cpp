//[DP]. Bài 29. Equal set
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int mod = 1e9 + 7;
int res = 0;
int main(){
    int n;cin >> n;
    int sum = n * (n+1) / 2;
    if(sum % 2 == 1){
        cout << 0;
    }
    
    else{
        sum /= 2;
        int f[sum + 1] = {0};
        f[0]= 1;
        for(int i=1;i<=n;i++){
            for(int j=sum;j>=i;j--){
                if(j >= i){
                    f[j] += f[j-i];
                }
                if(i==n && j == sum){
                    //thay vi dem tat ca cac cach tao ra tong = sum/2 roi chia ket qua cho 2 thi ta chi xet nhung case ma co so n o trong tong
                    res = f[j-i];
                }
                f[j] %= mod;
            }
        }
        cout << res;
    }
}