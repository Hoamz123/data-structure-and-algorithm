#include<bits/stdc++.h>
using namespace std;


vector<int> v;
set<vector<int>> se;
void Try(int idx,int sum,vector<int> s,int target){
    for(int j=idx;j<(int)s.size();j++){
        sum += s[j];
        v.push_back(s[j]);
        if(sum == target){
            vector<int> tmp = v;
            sort(tmp.begin(),tmp.end());
            se.insert(tmp);
        }
        else if(sum < target){
            Try(idx,sum,s,target);
        }
        sum -= s[j];
        v.pop_back();
    }
}


vector<vector<int>> combinationSum(vector<int> &candidates, int target)
{
    vector<vector<int>> v;
    Try(0,0,candidates,target);
    for(auto it : se) v.push_back(it);
    return v;
    //acc
}

int main(){
    vector<int> v = {10, 1, 2, 7, 6, 1, 5};
    vector<vector<int>> ve = combinationSum(v,8);
    for(auto it : ve){
        for(int i : it){
            cout << i << " ";
        }
        cout << endl;
    }
}