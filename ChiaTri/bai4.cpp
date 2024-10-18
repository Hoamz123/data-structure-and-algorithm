#include <bits/stdc++.h>
using namespace std;
#define ll long long
// [Chia Và Trị]. Bài 4. Gấp đôi dãy số
int found(int n,int k){
    ll x = pow(2,n-1);//chi so cua so dung giua
    if(k==x) return n;
    if(k > x) return found(n-1,k - x);//ben phai
    return found(n-1,k);//ben trai
}
int main(){
    int n,k;
    cin >> n >> k;
    cout << found(n,k);
}