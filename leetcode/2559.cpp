#include<bits/stdc++.h>
using namespace std;

bool check(string s){
    set<char> se = {'a', 'e', 'i', 'o','u'};
    return (se.find(s[0]) != se.end()) && (se.find(s[(int)s.size() - 1]) != se.end());//O(1)
}
vector<int> vowelStrings(vector<string> &words, vector<vector<int>> &queries)
{
    vector<int> prefix((int)words.size() + 1,0);
    for(int i=0;i<(int)words.size();i++){
        string x = words[i];
        if(i==0){
            if(check(x)) prefix[i] = 1;
        }
        else{
            if(check(x)){
                prefix[i] = prefix[i-1] + 1;
            }
            else prefix[i] = prefix[i-1];
        }
    }
    vector<int> ans;
    for(auto it : queries){
        int i = it[0];
        int j = it[1];
        if(i == 0) {
            ans.push_back(prefix[j]);
        }
        else{
            ans.push_back(prefix[j] - prefix[i-1]);
        }
    }
    //O(n+m)
    return ans;
}

int main(){
    vector<string> v = {"aba", "bcb", "ece", "aa", "e"};
    vector<vector<int>> q = {{0,2},{1,4},{1,1}};

    vector<int> ans = vowelStrings(v,q);
    for(auto it : ans) cout << it << " ";
}
// unordered_map<string,int> mp;
// for(string x : words){
//     //O(words.size())
//     mp[x] = 0;//0 : la khong tm
//     if(check(x)) mp[x] = 1;
// }
// vector<int> ans;
// for(auto st : queries){
//     int start = st[0];
//     int end = st[1];
//     int tmp = 0;
//     for(int i = start;i <= end;i++){
//         tmp += mp[words[i]];//O(1)
//     }
//     ans.push_back(tmp);
// }
// //O(n * n) : chua toi uu -> TLE
// return ans;