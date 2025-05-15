#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    map<string,int> ma;
    string namee;
    int pt;
    for(int i=0;i<10;i++){
        cin >> namee >> pt;
        ma[namee] = pt;
    }
    int t;cin >> t;

    vector<map<string,int>> vmp;
    vector<string > ve;
    for(int i=0;i<t;i++){
        string name;
        cin >> name;
        ve.push_back(name);
    }
    for(int j=0;j<(int)ve.size();j++){
        map<string,int> mp;
        for(int i=0;i<(int)ve[j].size();i++){
            string tmp = "";
            int pt = 0;
            while(i < (int)ve[j].size() && isalpha(ve[j][i])){
                tmp += ve[j][i];
                ++i;
            }
            while(i < (int)ve[j].size() && isdigit(ve[j][i])){
                pt = pt * 10 + (ve[j][i] - '0');
                ++i;
            }
            mp[tmp] += pt;
            i--;
        }
        vmp.push_back(mp);
    }

    for(int i=0;i<(int)vmp.size();i++){
        ll ans = 0;
        for(auto it : vmp[i]){
            ans += (ma[it.first] * it.second);
        }
        cout<< ans << endl;
    }

}