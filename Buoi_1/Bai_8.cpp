#include <bits/stdc++.h>
using namespace std;
#define ll long long
//tinh to hop chap k cua n su dung quy hoach dong phu hop n< 1e4,1e3
ll C[1000][1000];
//C[i][j] : to hop chap j cua i
const ll mod = 1e9 + 7;
void init(){
    for(int i=0;i<1000;i++){
        for(int j=0;j<=i;j++){
            if(j==0 && j==i){ 
                C[i][j] = 1;
            }
            else{
                C[i][j] = C[i-1][j-1] + C[i-1][j];
                C[i][j] %= mod;
            }
        }
    }
}
int main(){
    int t;cin >> t;
    init();
    while(t--){
        int k,n;cin >> n >> k;
        cout << C[n][k] << endl;
    }
    
    return 0;
}