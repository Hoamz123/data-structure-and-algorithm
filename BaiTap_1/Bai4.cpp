#include <bits/stdc++.h>
using namespace std;
#define ll long long
// so co 3 uoc  (so do < N)
// so co so luong uoc le -> so chinh phuong
// so chinh phuong ma co 3 uoc thi sqrt(no) = snt
/*
cac so thoa man la cac so chinh phuong sao cho sqrt(so do) la snt
*/
int p[1000001] = {0};
void sang(){
    for(int i=0;i<1000001;i++){
        p[i] = 1;
        p[0] = p[1] = 0;
    }
    for(int i=2;i<=sqrt(1000001);i++){
        if(p[i]){
            for(int j=i*i;j<1000001;j+=i){
                p[j] = 0;
            }
        }
    }
}
int main(){
    sang();
    int t;cin >> t;
    /*while(t--){
        int n;cin >> n;
        int cnt = 0;
        for(int i=2;i<=sqrt(n);i++){
            if(p[i]){
                cout << i*i << " ";
                cnt++;
            }
        }
        cout << endl << "number: " << cnt << endl;
    }*/
    while(t--){
        ll l,r;cin >> l >> r;
        int cnt = 0;
        int c1 = sqrt(l);int c2 = sqrt(r);
        if(1ll * c1 * c1 != l) ++c1;//case sqrt(l) bi lam tron xuong
        for(ll i=c1;i<=c2;i++){
            if(p[i]){
                cnt++;
            }
        }
        cout << cnt << endl;
    }
}