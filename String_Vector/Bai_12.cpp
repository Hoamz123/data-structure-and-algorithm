#include<bits/stdc++.h>
using namespace std;
//sort by length() tang dan
bool cmp(string a,string b){
    if(a.length() != b.length()){
        return a.length() < b.length();
    }
    return a < b;
}
int main(){
    //xap xep cac tu trong xau tang dan alphabel
    string s;getline(cin,s);
    stringstream ss(s);
    string word;
    vector<string> v;
    while(ss >> word){
        v.push_back(word);
    }
    sort(v.begin(),v.end(),cmp);//O(nlog(n))
    for(string x : v){
        cout << x << " ";
    }
}