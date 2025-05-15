#include<bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int> &nums)
{
    int j = 0;
    for(int i=1;i<(int)nums.size();i++){
        while(nums[j] != nums[i]){
            j++;
            nums[j] = nums[i];
        }
    }
    return j + 1;
}

int removeElement(vector<int> &nums, int val)
{
    sort(nums.begin(),nums.end());
    int j = 0;
    for(int i=0;i<(int)nums.size();i++){
        if(nums[i] != val){
            nums[j++] = nums[i];
        }
    }
    return j;
}

int main(){
    vector<int> v = {0, 1, 2, 2, 3, 0, 4, 2};
    cout << removeElement(v,2);
}