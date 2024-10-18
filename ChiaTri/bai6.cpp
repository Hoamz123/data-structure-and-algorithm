#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll cross(int a[],int l,int r,int mid){
    int sumL = 0,sumR = 0,maxL = 0,maxR = 0;
    for(int i=mid;i>=l;i--){
        sumL += a[i];
        maxL = max(maxL,sumL);
    }
    for(int i = mid + 1;i<=r;i++){
        sumR += a[i];
        maxR = max(maxR,sumR);
    }
    return maxL + maxR;
}
ll maxSum(int a[],int l,int r){
    if(l==r) return a[l];
    int mid = (l+r) / 2;
    return max({
        maxSum(a,l,mid),
        maxSum(a,mid+1,r),
        cross(a,l,r,mid)
    });
}
int main(){
    int n;cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    cout << maxSum(a,0,n-1);
}