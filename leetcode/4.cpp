#include<bits/stdc++.h>
using namespace std;

double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
{
    vector<int> v;
    for(int i=0;i<(int)nums1.size();i++) v.push_back(nums1[i]);
    for(int i=0;i<(int)nums2.size();i++) v.push_back(nums2[i]);
    
    merge(nums1.begin(),nums1.end(),nums2.begin(),nums2.end(),v.begin());
    double ans = 0;
    int id1 = v.size() / 2;
    if(((int)v.size() % 2 == 1)){
        ans = v[id1];
    }
    else{
        ans = (double)(v[id1] + v[id1 - 1]) / 2;
    }
    return ans;
    //1ms : do hai vector dau vao da xap xep tang dan r -> dung merge -> tao thanh vector v mat O(n+m);
    // -> tong mat O(n+m);
    //note : tham khao su dung chia tri -> O(log(n+m));
    //hard
}

int main(){
    vector<int> a = {2,2,4,4};
    vector<int> b = {2,2,2,4,4};
    cout << findMedianSortedArrays(a,b);
}