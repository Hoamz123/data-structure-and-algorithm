#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int,int> mp;
    int n = nums.size();
    vector<int> v;
    for(int i=0;i<n;i++){
        int x = target - nums[i];
        if(mp.find(x) != mp.end()){
            v.push_back(i);v.push_back(mp[x]);
            return v;
        }
        mp[nums[i]] = i;
    }
    return v;
}

int main(){
    vector<int> ve = {2,7,11,5};
    int target = 9;
    // unordered_map<int,int> mp;
    // for(int i=0;i<(int)v.size();i++){
    //     int x = target - v[i];
    //     if(mp.find(x) != mp.end()){
    //         cout << i << " " << mp[x] << endl;
    //         return 0;
    //     }
    //     mp[v[i]] = i;
    // }
    vector<int> v = twoSum(ve,target);
    for(int i : v) cout << i << " ";
    return 0;
    //acc
}