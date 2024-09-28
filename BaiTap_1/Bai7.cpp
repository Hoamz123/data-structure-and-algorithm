#include <bits/stdc++.h>
using namespace std;
#define ll long long

// tim so x lon nhat sao cho so N! chia het cho so p^x,biet p la so nguyen to
// su dung legendre
int degree(int n,int p){
    int ans = 0;
    for(int i=p;i<=n;i*=p){
        ans += n/i;
    }
    return ans;//tong so mu cua p
}
int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int t;cin >> t;
    while(t--){
       int n,p;cin >> n >> p;
       cout << degree(n,p) << endl;
    }
    fflush(stdout);
    return 0;
}