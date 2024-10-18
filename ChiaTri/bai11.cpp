//[Chia Và Trị]. Bài 10. Đếm số 0
#include<bits/stdc++.h>
using namespace std;
#define ll long long
/*
Cho mảng A[] gồm N phần tử chỉ bao gồm các số 0 và 1. Các số 0 được đặt trước
các số 1. Hãy đếm các số 0 với thời gian log(N).
*/
int cnt(int a[],int n){
    int l = 0,r = n-1;
    int idx = -1;
    while(l<=r){
        int m = (l+r)/2;
        if(a[m] == 1){
            idx = m;
            r = m - 1;
        }
        else if(a[m] < 1){
            l = m + 1;
        }
    }
    return idx;
}
int main(){
    int n;cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    cout << cnt(a,n) << endl;
}