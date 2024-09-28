#include <bits/stdc++.h>
using namespace std;
#define ll long long
/*
N,K(nguyen to) tim x de N! chia het cho K ^ x (x lon nhat)
*/
int degree(int n,int k){
    int ans = 0;
    for(int i=k;i<=n;i++){
        int m = i;
        while(m%k==0){
            ans++;
            m/=k; // khong lam thay doi i 
        }
    }
    return ans; 
}
int degree2(int n,int k){
    int ans = 0;
    for(int i=k;i<=n;i*=k){
        ans += n/i;
    }
    return ans;
}
int main(){
    cout << degree2(10,3) << endl;
    return 0;
}