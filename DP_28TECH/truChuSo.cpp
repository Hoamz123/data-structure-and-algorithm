#include<bits/stdc++.h>
using namespace std;
//[DP]. Bài 27. Xóa chữ số 9su dung de quy co nho)
int f[1000001];
int tinh(int n){
    if(n==0) return 0;
    if(f[n] != 0) return f[n];
    int m = n;int res = 1e9;
    while(m){
        int r = m % 10;
        if(r !=0){
            res = min(res,tinh(n-r) + 1);
        }
        m /= 10;
    }
    f[n] = res;
    return res;
}
int main(){
    int n;cin >> n;
    cout << tinh(n);
}