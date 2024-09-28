#include<bits/stdc++.h>
using namespace std;
int n;
string x = "()";
bool check(string s){
    stack<char> st;
    for(char x : s){
        if(x == '('){
            st.push(x);
        }
        else{
            if(st.empty()) return false;
            st.pop();
        }
    }
    if(st.empty()) return true;
    return false;
}
vector<string> v;string tmp = "";
void Try(int i){
    for(int j=0;j<(int)x.length();j++){
        tmp += x[j];
        if((int)tmp.length() == n){
            v.push_back(tmp);
        }
        else if ((int)tmp.length() < n){
            Try(i+1);
        }
        tmp.pop_back();
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    //N : Bai mac dinh la so chan
    Try(1);
    sort(v.begin(),v.end());
    for(string x : v){
        if(check(x)){
            cout << x << endl;
        }
    }
    return 0;
}
/*
6
((()))
(()())
(())()
()(())
()()()

*/