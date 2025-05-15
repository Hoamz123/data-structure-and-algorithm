#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    string s;cin >> s;
    map<char,int> mp;

    for(char x : s){
        mp[x]++;
    }

    map<int,int> fre;

    for(auto it : mp){
        fre[it.second]++;
    }

    if((int)fre.size() == 1) cout << "28tech";
    else if((int)fre.size() == 2){
        auto it = fre.begin();
        int fre1 = it->first;int cnt1 = it->second;
        ++it;
        int fre2 = it->first;int cnt2 = it->second;

        if((fre1 == 1 && cnt1 == 1) || (fre2 == 1 && cnt2 == 1) || (fre1 == fre2)) cout << "28tech";

        else if((fre1 == fre2 + 1 && cnt1 == 1) || (fre2 = fre1 + 1 && cnt2 == 1)){
            cout << "28tech";
        }
        else{
            cout << "29tech";
        }
    }
    else{
        cout << "29tech";
    }
    
}