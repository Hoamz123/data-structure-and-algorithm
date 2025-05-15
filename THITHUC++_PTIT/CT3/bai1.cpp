#include<bits/stdc++.h>
using namespace std;
int f[1000001];
int d[1000001];
void sieve(){
    for(int i=0;i<1000001;i++){
        f[i] = 1;
        f[0] = f[1] = 0;
    }
    for(int i=2;i<=1000;i++){
        if(f[i]){
            for(int j=i*i;j<1000001;j+=i){
                f[j] = 0;
            }
        }
    }
}
bool check(int n){
    while(n != 0){
        if(!f[n]){
            return false;
        }
        n/=10;
    }
    return true;
}

void sang(){
    for(int i=2;i<1000001;i++){
        if(check(i)){
            d[i] = 1;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0);cout.tie(0);cin.tie(0);
    sieve();
    sang();
    int ok = 0;
    int a,b;cin >> a >> b;
    for(int i=a;i<=b;i++){
        if(d[i] == 1){
            ok = 1;
            cout << i << " ";
        }
    }
    if(ok == 0){
        cout <<"28tech";
    }
    //ac
}