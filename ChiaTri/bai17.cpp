#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll cross(int a[],int l,int r,int mid){
    int sumL = 0,sumR = 0;
    int maxL = -1e9,MaxR = -1e9;
    for(int i=mid;i>=l;i--){
        sumL += a[i];
        maxL = max(maxL,sumL);
    }
    for(int i=mid + 1;i<=r;i++){
        sumR += a[i];
        MaxR = max(MaxR,sumR);
    }
    return maxL + MaxR;
}
ll maxS(int a[],int l,int r){
    if(l==r) return a[l];
    int mid = (l+r) / 2;
    return max({maxS(a,0,mid),maxS(a,mid+1,r),cross(a,l,r,mid)});
}
int main(){
    int n;cin >> n;
    int a[n];
    for(int i=0;i<n;i++) cin >> a[i];
    cout << maxS(a,0,n-1);
}