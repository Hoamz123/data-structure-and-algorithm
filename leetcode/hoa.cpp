#include<bits/stdc++.h>
using namespace std;

// int main(){
//     ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
//     int a[] = {10,4,-8,7};
//     int n = sizeof(a) / sizeof(a[0]);
//     int sum = 0;
//     for(int i=0;i<n;i++) sum += a[i];
//     int cnt = 0;
//     int sumL = 0;
//     for(int l = 0;l<n-1;l++){
//         sumL += a[l];
//         sum -= a[l];
//         if(sumL >= sum) cnt++;
//     }
    
//     cout << cnt;
// }

int waysToSplitArray(vector<int>& nums) {
    int n = nums.size();
    int sum = 0;
    int sumL = 0;
    int cnt = 0;
    for(int i=0;i<n;i++){
        sum += nums[i];
    }
    for(int i=0;i<n-1;i++){
        sumL += nums[i];
        sum -= nums[i];
        if(sumL >= sum) cnt++;
    }
    return cnt;
}