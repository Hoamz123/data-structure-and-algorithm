#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f float
void qs(int l,int r,int a[]){
    int i = l,j = r;
    int mid = a[(l+r)/2];

    while(i <= j){
        while(a[i] < mid) i++;
        while(a[j] > mid) j--;
        //chay dc xuong day
        if(i <= j){
            swap(a[i],a[j]);
            ++i;--j;
        }
    }
    //de quy
    if(i <= r) qs(i,r,a);
    if(l <= j) qs(l,j,a);
}

int main(){
    f x;
    cin >> x;
    int n;cin >> n;
    int a[n];
    for(int i=0;i<n;i++) cin >> a[i];
    qs(0,n-1,a);
    for(int i : a) cout << i << " ";
    return 0;
}