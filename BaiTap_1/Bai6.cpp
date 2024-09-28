#include <bits/stdc++.h>
using namespace std;
#define ll long long

//ham sang uoc so nguyen to nho nhat cua mot so dua tren thuat toan sang so
// B1 : sang cac uoc nguyen to nho nhat
// B2 : lay n chia cho cac uoc nho nhat cua p[n] -> n==1
int p[1000001] = {0};//voi moix i thi p[i] la uoc nguyen to nho nhat cua i
void pt(){
    for(int i=0;i<1000001;i++){
        p[i] = i;
    }
    for(int i=2;i<=1000;i++){
        if(p[i] == i){
            //ban than p[i]  dang la snt
            for(int j=i*i;j<1000001;j+=i){
                if(p[j] == j){
                    //ban than no chua bi gan
                    p[j] = i;//p[j] se bang uoc nguyen to nho nhat cua no
                }
            }
        }
    }
}
int main(){
    int t;cin >> t;
    pt();
    while(t--){
        int n;cin >> n;
        while(n!=1){
            cout << p[n] << " ";
            n/=p[n];//do p[i] la uoc so nguyen to nho nhat da sang
        }
        cout << endl;
    }
    /*int k = 0;
    while(t--){
        int n;cin >> n;int cnt = 0;
        cout << "TC#" << ++k << " ";
        while(n!=1){
            int tmp = p[n];//chot ban dau(uoc nguyen to nho nhat cua n)
            cnt++;
            n/=p[n];// luc nay n da thay doi -> p[n] cung thay doi
            if(p[n] != tmp){//khac gia tri uoc nho nhat ban dau -> sang thua so nto moi
                cout << tmp << "(" << cnt << ")" << " ";
                cnt = 0;
            }
        }
        cout << endl;
    }*/
    return 0;
}