#include<bits/stdc++.h>
using namespace std;
#define ll long long


//dem uoc (contest day 29/11) :
int mod = 1e9 + 7;
int n;
int a[1000001];
int cnt[1000001];
int pt[1000001];

void sieve(){
    //sang phan tich thua so nguyen to vidu pt[60] = 2;pt[60] se dcv gan bang uoc nguyen to nho nhat cua no
    for(int i=0;i<1000001;i++){
        pt[i] = i;
    }
    for(int i=2;i<=1000;i++){
        if(pt[i] == i){
            for(int j=2*i;j<1000001;j+=i){
                if(pt[j] == j) pt[j] = i;
            }
        }
    }
}

void count(int n){
    while(n != 1){
        int x = pt[n];
        while(n % x == 0){
            cnt[x]++;
            n /= x;
        }
    }
}
int main(){
    sieve();
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a[i];
        count(a[i]);
    }

    ll ans = 1;
    for(int i=2;i<1000001;i++){
        if(cnt[i]){
            ans *= (cnt[i] + 1);
            ans %= mod;
        }
    }
    cout << ans;

}

// http://oj.28tech.com.vn/contest/cpp_ptit_test1