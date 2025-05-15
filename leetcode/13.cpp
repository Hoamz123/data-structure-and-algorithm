#include<bits/stdc++.h>
using namespace std;

int romanToInt(string s)
{
    map<char,int> mp;
    mp['I'] = 1;mp['V'] = 5;mp['X'] = 10;mp['L'] = 50;mp['C'] = 100;mp['D'] = 500;mp['M'] = 1000;
    int ans = 0;
    ans += mp[s[0]];
    for(int i=1;i<(int)s.size();i++){
        if(mp[s[i]] > mp[s[i-1]]){
            ans -= mp[s[i-1]];
            ans += (mp[s[i]] - mp[s[i-1]]);
        }
        else{
            ans += mp[s[i]];
        }
    }
    return ans;
    //acc
}

int main(){
    cout << romanToInt("LVIII");
}