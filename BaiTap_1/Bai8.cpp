#include <bits/stdc++.h>
using namespace std;
#define ll long long
// dem so luong chu so 0 lien tiep tinh tu cuoi cua n!
// vi du: 5! = 120;out : 1(mot so 0 tu cuoi  trong ket qua)
// xet phan tich thua so nguyen to trong doan tu 5->n;dem xem so 5 xuat hien tong cong bao nhieu lan (->so 5 ket hop voi so 2 ->1 so 0)
int p[1000001] = {0};
void solve(){
    int cnt = 0;
    for(int i=5;i<1000001;i++){
        int m = i;
        while(m%5==0){
            cnt++;
            m/=5;
        }
        p[i] = cnt;
    }
}
int degree(int n,int p){
    int ans = 0;
    for(int i=p;i<=n;i*=p){
        ans += n/2;
    }
    return ans;
}
int main(){
    solve();
    int t;cin >> t;
    while(t--){
        int n;cin >> n;
        cout << p[n] << endl;
        /*
        cach 2:
        cout << degree(n,5) << endl;
        */
    }
    return 0;
}
