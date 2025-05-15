#include<bits/stdc++.h>
using namespace std;

// bool check(map<int,int> flag,vector<int> v){
//     map<int,int> tmp;
//     for(auto it : v){
//         tmp[it]++;
//     }
//     for(int i : v){
//         if(tmp[i] > flag[i]) return false;
//     }
//     return true;
// }

// vector<vector<int>> threeSum(vector<int> &nums)
// {
//     map< int,set<pair<int,int>> > mp;
//     int n = nums.size();
//     for(int i=0;i<n-1;i++){
//         for(int j=i+1;j<n;j++){
//             int x = nums[i] + nums[j];
//             if(mp[x].find({nums[j], nums[i]}) == mp[x].end() && mp[x].find({nums[i], nums[j]}) == mp[x].end()){
//                 mp[x].insert({nums[i], nums[j]});
//             }
//         }
//     }
//     map<int,int> flag;
//     for(auto it : nums){
//         flag[it]++;
//     }

//     set<vector<int>> result;
//     for(int i=0;i<n;i++){
//         int x = -1 * nums[i];
//         if(mp.find(x) != mp.end()){
//             for(auto it : mp[x]){
//                 vector<int> tmp;
//                 tmp.push_back(nums[i]);
//                 tmp.push_back(it.first);
//                 tmp.push_back(it.second);
//                 sort(tmp.begin(),tmp.end());
//                 result.insert(tmp);
//             }
//         }
//     }
//     vector<vector<int>> rs;
//     for(auto it : result){
//         if(check(flag,it)) rs.push_back(it);
//     }
//     return rs;
//     //308/313 : chua toi uuuu
// }


vector<vector<int>> threeSum(vector<int> &nums){
    int n = nums.size();
    vector<vector<int>> v;
    sort(nums.begin(),nums.end());
    for(int i=0;i<n - 2;i++){
        if(i > 0 && nums[i] == nums[i-1]) continue;
        int target = -1 * nums[i];
        int l = i + 1;int r = n - 1;
        while(l < r){
            int tmp = nums[l] + nums[r];
            if(tmp == target){
                v.push_back({nums[i],nums[l],nums[r]});
                while(l < r && nums[l] == nums[l+1]) l++;
                while(l < r && nums[r] == nums[r-1]) r--;
                l++;
                r--;
            }
            else if(tmp < target){
                l++;
            }else --r;
        }
    }
    return v;
}

int main(){
    vector<int> num = {-1, 0, 1, 2, -1, -4};
    vector<vector<int>> v = threeSum(num);

    for(auto it : v){
        for(auto i : it) cout << i << " ";
        cout << endl;
    }
}