#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;cin >> n;
    priority_queue<ll> q;
    while(n--){
        string s;cin >> s;
        char choice = s[0];
        ll x = 0;
        if(choice == '+'){
            x = stoll(s.substr(1));
            if(q.size() < 15000){
                q.push(x);
            }
        }
        else {
            if(!q.empty()){
                ll x = q.top();q.pop();
                priority_queue<ll> tmp;
                while(!q.empty()){
                    if(q.top() != x){
                        tmp.push(q.top());
                    }
                    q.pop();
                }
                q = tmp;
            }
        }
    }
    map<ll,int> mp;
    while(!q.empty()){
        mp[q.top()] = 1;
        q.pop();
    }
    cout << mp.size() << endl;
    for(auto it = mp.rbegin();it != mp.rend();it++){
        cout << it->first << " ";
    }
}