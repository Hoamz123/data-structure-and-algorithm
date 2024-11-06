#include<bits/stdc++.h>
using namespace std;
#define ll long long
string s = "()";
int n;
bool check(string s){
    stack<char> st;
    for(char x : s){
        if(x == '('){
            st.push(x);
        }
        else{
            //x ko mo
            if(st.empty()) return false;
            else{
                st.pop();
            }
        }
    }
    if(st.empty()) return true;
    return false;
}
vector<string> v;
string tmp = "";
void Try(int i){
    for(int j=0;j<(int)s.size();j++){
        tmp += s[j];
        if((int)tmp.size() == n){
            v.push_back(tmp);
        }
        else{
            Try(i+1);
        }
        //back track
        tmp.pop_back();
    }
}
int main(){
    cin >> n;
    if(n % 2 == 1) cout << -1;
    else{
        Try(1);int cnt = 0;
        sort(v.begin(),v.end());
        for(string x : v){
            if(check(x)){
                cnt++;
                cout << x << endl;
            }
        }
        cout << cnt;
    }
}