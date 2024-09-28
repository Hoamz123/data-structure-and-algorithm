#include <bits/stdc++.h>
using namespace std;
#define ll long long
//dem uoc cua n!
int degree(int n,int p){
    //ham nay tra ve so res sao cho n! % (p^res) == 0;voi p la snt
    int res = 0;
    for(int i=p;i<=n;i*=p){
        res += n/i;
    }
    return res;
}
//check snt
bool snt(int n){
    if(n<2) return false;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return false;
    }
    return true;
}
int main(){
    int t;cin >> t;
    while(t--){
        int n;cin >> n;ll result = 1;
        for(int i=2;i<=n;i++){
            if(snt(i)){
                int b = degree(n,i);//b la so mu sao cho n! % (i^b) == 0 (b la bac cua i trong n!)
                //tinh so luong uoc
                result *= (b + 1);
            }
        }
        cout << result << endl;
    }
}