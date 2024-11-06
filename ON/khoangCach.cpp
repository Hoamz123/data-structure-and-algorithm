#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
string s;
string solve(){
    int n = s.size();
    for(int len = 1;len <= n;len ++){
        if(n % len == 0){
            int k = n / len;
            string res = s.substr(0,len);
            string tmp = "";
            for(int i=0;i<k;i++){
                tmp += res;
            }
            if(tmp == s){
                return to_string(k) + res;
            }
        }
    }
    return "1";
}
int main(){
    cin >> s;
    cout << solve();
}