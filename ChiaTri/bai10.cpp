#include <bits/stdc++.h>
using namespace std;
#define ll long long
//[Chia Và Trị]. Bài 9. Phần tử khác nhau
/*int main(){
    int n;
    cin >> n;
    int m = n - 1;
    int a[n],b[m];
    for(int &x : a) cin >> x;
    for(int &x : b) cin >> x;
    int idx = 0;
    for(int i=0;i<m;i++){
        if(b[i] != a[i]){
            idx = i;
            break;
        }
    }
    //Neu id van = 0
    if(!idx){
        idx = n - 1;
    }
    cout << idx + 1<< endl;
    return 0;
}*/
int bs(int a[],int b[],int n){
    int l = 0,r = n-2;
    int res = -1;
    while(l<=r){
        int m = (l+r) / 2;
        if(b[m] == a[m]){
            l = m + 1;
        }
        else{
            res = m;
            r = m-1;///dich ve ben trai de tim vi tri khac nhau dau tien
        }
    }
    return res + 1;
}


int main(){
    int n;cin >> n;
    int a[n],b[n-1];
    for(int &x : a) cin >> x;
    for(int &x : b) cin >> x;
    cout << bs(a,b,n);
}