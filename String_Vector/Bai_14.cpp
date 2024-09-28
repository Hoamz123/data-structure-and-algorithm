#include<bits/stdc++.h>
using namespace std;
void convert(string &s){
    s[0] = toupper(s[0]);
    for(int i=1;i<(int)s.length();i++){
        s[i] = tolower(s[i]);
    }
}
int main(){
    int t;cin >> t;
    cin.ignore();
    while(t--){
        string s;getline(cin,s);
        vector<string> v;//luu cac tu trong name;
        stringstream ss(s);
        string tmp;
        while(ss >> tmp){
            convert(tmp);
            v.push_back(tmp);
        }
        cout << v[v.size() - 1] << ", ";
        for(int i=0;i<(int)v.size() - 1;i++){
            cout << v[i];
            if(i!=(int)v.size() - 2) cout << " ";
        }
        cout << endl;
    }
}