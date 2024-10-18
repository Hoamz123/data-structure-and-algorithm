#include<bits/stdc++.h>
using namespace std;
#define ll long long
//chia va tri : BAI 7 Floor
int floor(int a[],int n,int x){
    int id = -1;
    int l = 0,r = n-1;
    while(l<=r){
        int m = (l + r) / 2;
        if(a[m] <= x){
            id = m;
            l = m + 1;
        }
        else r = m-1;
    }
    return id;
}
int main(){
    int n,k;cin >> n >> k;
    int a[n];
    for(int &x : a) cin >> x;
    sort(a,a+n);
    int id = floor(a,n,k);
    if(id == -1){
        cout << id << endl;
    }
    else cout << a[id] << endl;
}