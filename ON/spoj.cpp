#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n;
int main(){
    cin >> n;
    map<ll,int> mp;
    for(int i=0;i<n;i++){
        int x;cin >> x;
        mp[x]++;
    }
    set<ll> s;
    for(auto it : mp){
        if(it.second  >= 2){
            s.insert(it.first);
        }
    }
    vector<ll> rs;
    for(int x : s){
        rs.push_back(x);
    }
    if(rs.empty()) cout << 0;
    else{
        if((int)rs.size() == 1){
            if(mp[*rs.begin()] >= 4){
                cout << 1ll * *rs.begin() * *rs.begin();
            }else{
                cout << 0;
            }
        }
        else if((int)rs.size() >= 2){
            ll mul = 0;
            ll mul1 = 0;
            for(int x : rs){
                if(mp[x] >= 4){
                    mul = 1ll * x * x;
                }
            }
            int len = rs.size() - 1;
            mul1 = 1ll * rs[len] * rs[len - 1];
            cout << 1ll * max(mul,mul1);
        }
    }
}