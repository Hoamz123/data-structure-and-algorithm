#include<bits/stdc++.h>
using namespace std;
int prime[10000001] = {0};
void sang(){
    for(int i=0;i<10000001;i++){
        prime[i] = 1;
        prime[0] = prime[1] = 0;
    }
    for(int i=2;i<=sqrt(10000001);i++){
        if(prime[i]){
            for(int j = i*i;j<10000001;j+=i){
                prime[j] = 0;
            }
        }
    }
}
void sieve(int l,int r){
    int p[r - l + 1];
    for(int i=0;i<r-l+1;i++){
        p[i]  = 1;
    }
    for(int i=2;i<=sqrt(r);i++){
        for(int j = max(i*i,(l+i-1)/i*i);j<=r;j+=i){
            p[j - l] = 0;
        }
    }
    for(int i = max(i,l);i<=r;i++){
        if(p[i - l]){
            cout << i << " ";
        }
    }
}
int main(){
    /*sang();
    int n;cin >> n;
    if(prime[n]){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }*/
    int l,r;cin >> l >> r;
    sieve(l,r);
    return 0;
}