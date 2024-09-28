#include <bits/stdc++.h>
using namespace std;
#define ll long long
//dem so luong cac so nguyen to cung nhau voi n va khong vuot qua n
//phi ham euler
ll euler(int n){
    ll res = n;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            res = res - res / i;
            while(n%i==0){
                n/=i;
            }
        }
    }
    if(n>1) res -= res / n;
    return res;
}
//ham sang phi ham euler
int fi[1000001] = {0};
void sang(){
    for(int i=0;i<1000001;i++){
        fi[i] = i;
    }
    for(int i=2;i<1000001;i++){
        if(fi[i] == i){
            //chua duoc cap nhat(la snt)
            fi[i] = i-1;//(cap nhat theo cong thuc)
            for(int j = 2*i;j<1000001;j+=i){
                fi[j] = fi[j] - fi[j] / i;
            }
        }
    }
}
int main(){
    sang();
    int t;cin >> t;
    while(t--){
        int n;cin >> n;
        //cout << euler(n) << endl;
        for(int i=1;i<=n;i++){
            cout << fi[i] << " ";
        }
        cout << endl;
    }
    return 0;
}