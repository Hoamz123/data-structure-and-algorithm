#include<bits/stdc++.h>
using namespace std;

int threeSumClosest(vector<int> &nums, int target){
    int n = nums.size();
    int ans = 1e8;//luu ket qua
    int t = 1e8;//luu do chenh lech nho nhat
    sort(nums.begin(),nums.end());
    for(int i=0;i < n - 2;i++){
        int l = i + 1;int r = n - 1;
        while(l < r){
            int tmp = nums[i] + nums[l] + nums[r];
            if(tmp < target){
                if(abs(target - tmp) < t){
                    t = abs(target - tmp);
                    ans = tmp;
                }
                ++l;
            }
            else{
                if(abs(target - tmp) < t){
                    t = abs(target - tmp);
                    ans = tmp;
                }
                --r;
            }
        }
    }
    return ans;
}

int main(){
    vector<int> nums = {-1,2,1,-4};
    int target = 1;
    cout << threeSumClosest(nums,target);
}