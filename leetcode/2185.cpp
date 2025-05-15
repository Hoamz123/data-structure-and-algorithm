#include<bits/stdc++.h>
using namespace std;

int prefixCount(vector<string> &words, string pref)
{
    int ans = 0;
    int lenPref = pref.size();
    for(string x : words){
        if((int)x.size() >= lenPref){
            if(x.substr(0,lenPref) == pref) ans++;
        }
    }
    return ans;
    //acc
}

int main(){
    vector<string> v = {"leetcode", "win", "loops", "success"};
    string pref = "leet";
    cout << prefixCount(v,pref);
}