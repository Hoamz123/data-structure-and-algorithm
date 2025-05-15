#include<bits/stdc++.h>
using namespace std;

bool check(vector<string> &strs,int id,char x){
    for(int i=0;i<(int)strs.size();i++){
        if(strs[i][id] != x) return false;
    }
    return true;
}

string longestCommonPrefix(vector<string> &strs)
{
    int len = 1e8;
    for(auto it : strs){
        len = min(len,(int)it.size());
    }
    int i = 0;
    string s = "";
    while(i < len){
        if(check(strs,i,strs[0][i])){
            s.push_back(strs[0][i]);
        }
        else i = len + 10000;
        ++i;
    }
    return s;
    //acc : beats 100%
}

int main(){
    vector<string> v = {"d","dd","ddddrktgugewig"};
    cout << longestCommonPrefix(v);
}