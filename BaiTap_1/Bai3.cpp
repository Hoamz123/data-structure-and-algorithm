#include <bits/stdc++.h>
using namespace std;
#define ll long long
// cap snt co tong  = n;
int p[10001] = {0};
void sieve(){
    for(int i=0;i<10001;i++){
        p[i] = 1;
        p[0] = p[1] = 0;
    }
    for(int i=2;i<=sqrt(10001);i++){
        if(p[i]){
            for(int j=i*i;j<10001;j+=i){
                p[j] = 0;
            }
        }
    }
}
int main(){
    sieve();
    int t;cin >> t;
    while(t--){
        int n;cin >> n;
        for(int i=2;i<=n/2;i++){
            //neu duyet den n thi se bi lap
            if(p[i] && p[n-i]){
                cout << i << " " << n - i << endl;
            }
        }
    }
    return 0;
}