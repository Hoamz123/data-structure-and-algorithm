#include<bits/stdc++.h>
using namespace std;
int n;
string s;int ok;
void sinh(){
    int i = s.size() - 1;
    while(i>=0 && s[i] == 'H'){
        s[i] = 'A';
        --i;
    }
    if(i==-1) ok = false;
    else s[i] = 'H';
}
bool check(){
    for(int i=0;i<(int)s.size() - 1;i++){
        if(s[i] == 'H' &&  s[i+1] == 'H') return false;
    }
    return s[0] == 'H' && s[n-1] == 'A';
}
int main(){
    int t;cin >> t;
    while(t--){
        cin >> n;
        s = string(n,'A');//khoi tao
        ok = 1;
        while(ok){
            if(check()){
                cout << s << endl;
            }
            sinh();
        }
    }
}