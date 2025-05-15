#include<bits/stdc++.h>
using namespace std;

int maxArea(vector<int> &height)
{
    int l = 0;
    int r = height.size() - 1;
    int ans = 0;
    while(l <= r){
        int x = min(height[l],height[r]);
        int y = r - l;
        ans = max(ans,x * y);
        (height[l] <= height[r]) ? (++l) : (--r);
    }
    return ans;
}
//acc
int main(){
    vector<int> v = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    cout << maxArea(v);
}