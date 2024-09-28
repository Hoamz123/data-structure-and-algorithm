#include <bits/stdc++.h>
using namespace std;
#define ll long long
//so nguyen to khong vuot qua n
int p[1000001] = {0};
void sieve(){
    for(int i=0;i<1000001;i++){
        p[i] = 1;
        p[0] = p[1] = 0;
    }
    for(int i=2;i<=1000;i++){
        if(p[i]){
            for(int j=i*i;j<1000001;j+=i){
                p[j] = 0;
            }
        }
    }
}
int main(){
    int n;cin >> n;
    sieve();
    for(int i=0;i<=n;i++){
        if(p[i]){
            cout << i << " ";
        }
    }
    return 0;
}