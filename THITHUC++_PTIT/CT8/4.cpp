#include<bits/stdc++.h>
using namespace std;
string s;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> s;
    s = "0" + s;
    s += "@";
    for(int i=1;i<(int)s.size() - 1;i++){
        cout << s[i];
        int cnt = 1;
        while(i < (int)s.size() && s[i] == s[i+1]){
            cnt++;
            ++i;
        }
        cout << cnt;
    }
    //acc
}