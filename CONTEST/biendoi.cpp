#include <bits/stdc++.h>
#include<iomanip>
using namespace std;
#define ll long long
//AC
ll cs10 (ll x){
    //doi tu 8 sang 10
    ll cs_10 = 0;
    string s = to_string(x);
    int len = (int)s.size() - 1;
    for(int i=0;i<=len;i++){
        cs_10 += (s[i] - '0') * pow(8,len - i);
    }
    return cs_10;
}
ll cs8(ll x){
    //doi tu 10 sang 8
    ll cs_8 = 0;
    string s = "";
    while(x != 0){
        s += (x % 8 + '0');
        x /= 8;
    }
    reverse(s.begin(),s.end());
    cs_8 = stoll(s);
    return cs_8;
}
//ham sort
ll reve(ll x){
    string s = to_string(x);
    sort(s.begin(), s.end());
    ll res = stoll(s);
    return res;
}
bool check(ll x){
    string s = to_string(x);
    for(int i=0;i<(int)s.size() - 1;i++){
        if(s[i]  - '0' > s[i+1] - '0') return false;
    }
    return true;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("BIENDOI.INP","r",stdin);
    freopen("BIENDOI.OUT","w",stdout);
    ll x;
    cin >> x;
    ll p = cs8(x);
    if(check(p)){
        cout << 0 << endl;
        return 0;
    }
    string s = to_string(p);
    sort(s.begin(), s.end());
    ll q = stoll(s);//dang la co_8
    for(int i=0;i<5;i++){
        p = cs10(p);
        q = cs10(q);
        p = p - q;
        //doi p ve cs 8
        if(check(cs8(p)) && check(reve(p))){
            cout << 0;
            return 0;
        }
        p = cs8(p);
        q = reve(p);
    }
    cout << cs10(p);
    return 0;
}
