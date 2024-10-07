#include<bits/stdc++.h>
using namespace std;
//Bai 25 : Hang doi
int main(){
    int n;cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    int sum = 0;//time de cho nhung nguoi den trc
    int sl = 0;
    sort(a,a+n);
    for(int i=0;i<n;i++){
        if(a[i] >= sum){
            sl++;
            sum += a[i];
        }
    }
    cout << sl;
    return 0;
}
/*
7
4 3 17 4 5 14 20
*/