#include<bits/stdc++.h>
using namespace std;

vector<string> stringMatching(vector<string> &words)
{
    set<string> se;
    int i=0;
    while(i < (int)words.size()){
        string s = words[i];
        for(int j=0;j<(int)words.size();j++){
            if(s == words[j]) continue;
            if((int)words[j].size() > (int)s.size()){
                if(words[j].find(s) != string :: npos){
                    se.insert(s);
                }
            }
        }
        ++i;
    }
    vector<string> ans(se.begin(),se.end());
    return ans;
    //acc : easy
}

int main(){
    vector<string> v = {"leetcoder", "leetcode", "od", "hamlet", "am"};
    vector<string> ans = stringMatching(v);
    for(auto it : ans) cout << it <<  " ";

}