#include<bits/stdc++.h>
using namespace std;
#define ll long long
//cho so n tìm boi so nho nhat cua n sao cho so do la so chinh phuong
int main(){
    ll n;cin >> n;
    ll ans = n;
    //vd 12 = 2^2 * 3^1;snt 3 co mu le nen lay n * 3
    for(ll i=2;i<=sqrt(n);i++){
        if(n % i == 0){
            int cnt = 0;//dem so mu cua uoc nguyen to
            while(n % i == 0){
                cnt++;
                n/=i;
            }
            if(cnt  % 2 != 0) ans *= i;
        }
    }
    if(n > 1) ans *= n;
    cout << ans;
}