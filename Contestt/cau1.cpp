#include<bits/stdc++.h>
using namespace std;

int cross(int a[],int l,int r,int mid){
    int maxLeft = -1e9;
    int maxRight = -1e9;
    int sumL = 0;
    int sumR = 0;
    for(int i=mid;i>=l;i--){
        sumL+=a[i];
        maxLeft = max(maxLeft,sumL);
    }
    for(int i=mid+1;i<=r;i++){
        sumR += a[i];
        maxRight =max(maxRight,sumR);
    }
    return maxLeft + maxRight;
}

int sumM(int a[],int l,int r){
    if(l==r){
        //base case
        return a[l];
    }
    int mid = (l+r)/2;
    return max({sumM(a,l,mid),sumM(a,mid+1,r),cross(a,l,r,mid)});
}
int main(){
    int n;cin >> n;
    int a[n];

    for(int i=0;i<n;i++) cin >> a[i];
    cout << sumM(a,0,n-1);
}