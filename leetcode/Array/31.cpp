#include<bits/stdc++.h>
using namespace std;

vector<int> searchRange(vector<int> &nums, int target)
{
    int start = -1;
    int end = -1;
    for(int i=0;i<(int)nums.size();i++){
        if(nums[i] == target){
            start = i;
            break;
        }
    }
    for(int i=(int)nums.size() - 1;i>=0;i--){
        if(nums[i] == target){
            end = i;
            break;
        }
    }
    return {start,end};
    //acc 31:
}

int searchInsert(vector<int> &nums, int target)
{
    int idx = -1;
    for(int i=0;i<(int)nums.size();i++){
        if(nums[i] == target){
            idx = i;
            break;
        }
    }
    if(idx == -1){
        for(int i=(int)nums.size() - 1;i>=0;i--){
            if(nums[i] < target){
                idx = i + 1;
                break;
            }
        }
    }
    if(idx == -1){
        idx = 0;
    }
    return idx;
}



int main(){
    vector<int> v = {1,3,5,6};
    int target = 0;
    cout << searchInsert(v,target);
}