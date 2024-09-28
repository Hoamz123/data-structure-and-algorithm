#include<bits/stdc++.h>
using namespace std;
int n;string s = "[](){}";
vector<string> v;string tmp;
bool check(string s){
    stack<char> st;
    for(char x : s){
        if(x=='(' || x == '[' || x == '{'){
            st.push(x);
        }
        else{
            if(st.empty()) return false;
            char y = st.top();//y la cac dau mo trong stack
            st.pop();
            if((x == ')' && y != '(') || (x == ']' && y != '[') || (x == '}' && y != '{')){
                return false;
            }
        }
    }
    if(st.empty()) return true;
    return false;
}
void Try(int i){
    for(int k = 0;k<(int)s.length();k++){
        tmp += s[k];
        if((int)tmp.size()==n){
            v.push_back(tmp);
        }
        else{
            Try(i+1);
        }
        //backtrack
        tmp.pop_back();
    }
}
int main(){
    cin >> n;
    if(n%2!=0) cout << "Not found" <<endl;
    else{
        Try(1);
        sort(v.begin(),v.end());
        for(string x :v){
            if(check(x)){
                cout << x << " ";
            }
        }
    }
}