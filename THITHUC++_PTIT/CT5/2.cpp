#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll n;cin >> n;
    ll res = -1;
    ll resV = -1;

    for(ll i=2;i<=sqrt(n);i++){
        ll cnt = 0;
        if(n % i == 0){
            while(n % i == 0){
                cnt++;
                n/=i;
            }
            if(cnt > res){
                //neu co cung thi lay so nho hon
                res = cnt;
                resV = i;
            }
        }
    }
    if(n != 1){
        ll cnt = 1;
        if(cnt  > res){
            res = cnt;
            resV = n;
        }
    }
    // https://docs.google.com/spreadsheets/d/1ZjMGqvXUIoWgvcPXWPh2xtCIQ2_nwhg6yn0prsMecSU/edit?gid=0#gid=0
    cout << resV << " " << res;
}