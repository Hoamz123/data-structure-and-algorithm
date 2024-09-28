#include<bits/stdc++.h>
using namespace std;
//in tat ca cac xau nhi phan co do dai N va co K bit 1(theo thu tu tu dien tang dan)
int n,k,a[1001];
bool ok;
void ktao(){
    for(int i=1;i<=n;i++){
        a[i] = 0;
    }
}
void sinh(){
    int i = n;
    while(i>=1 && a[i] == 1){
        a[i] = 0;
        --i;
    }
    if(i==0) ok = false;//cau hinh cuoi cung
    else a[i] = 1;
}
bool check(){
    //kiem tra xem trong mang co dung k bit 1 hay khong
    int cnt = 0;//dem xem co bao nhieu bit 1
    for(int i=1;i<=n;i++){
        if(a[i] == 1){
            cnt++;
        }
    }
    return cnt == k;
}
int main(){
    int t;cin >> t;
    while(t--){
        cin >> n >> k;
        ok = true;
        ktao();
        while(ok){
            if(check()){//dam bao co k bit 1
                for(int i=1;i<=n;i++){
                    cout << a[i];
                }
                cout << " ";
            }
            sinh();
        }
        cout << endl;
    }
}
/*
in:
2
4 2
3 2
out:
0011 0101 0110 1001 1010 1100
011 101 110
*/