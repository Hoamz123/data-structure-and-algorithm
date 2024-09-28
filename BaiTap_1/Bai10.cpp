#include <bits/stdc++.h>
using namespace std;
#define ll long long
//so hoan hao la cac so co tong cac uoc(ko tinh no) = chinh no
// test case t <= 100
//1<= n <= 1e18(lon)

/*bool sum(ll n){
    //khong toi uu TH xau nhat ->O(n)
    ll ans = 1;
    for(ll i=2;i<=sqrt(n);i++){
        if(n%i==0){
            ans += (i + n/i);
        }
        if(i*i == n) ans -= i;
    }
    return ans==n;
}

int main(){
    int t;cin >> t;
    while(t--){
        //xau nhat la O(n^2)
        ll n;cin >> n;
        if(sum(n)) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
}*/


//cách tối ưu p là snt ,2^p - 1 cung x là snt thì ///
//duyet tu 1->32 neu > 32 ->chan long long
bool snt(int n){
    if(n<2) return false;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return false;
    }
    return true;
}
ll hh[100];
int cnt = 0;//dem so luong so hoan hao
void init(){
    for(int p=2;p<=32;p++){
        if(snt(p)){
            int tmp = (int)pow(2,p) - 1;
            if(snt(tmp)){
                hh[cnt] = 1ll * (int) pow(2,p-1) * tmp;
                cnt++;
            }
        }
    }
}
int main(){
    init();
    int t;cin >> t;
    while(t--){
        int n;cin >> n;
        bool ok = false;
        for(int i=0;i<cnt;i++){
            if(n==hh[i]){
                cout << "Yes" << endl;
                ok = true;
                break;
            }
        }
        if(!ok) cout << "No" << endl; 
    }
    return 0;
}