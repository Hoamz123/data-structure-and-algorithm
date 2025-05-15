#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin >> t;
    cin.ignore();
    vector<string> v;
    for(int i=0;i<t;i++){
        string s;
        getline(cin,s);
        s = "0" + s;
        v.push_back(s);
    }

    vector<map<int,int>> ve;

    for(string s : v){
        map<int,int> mp;
        for(int i=1;i<=(int)s.size();){
            int fir = 0;
            int en = 0;
            while(i <= (int)s.size() && isdigit(s[i])){
                fir = fir * 10 + (s[i] - '0');
                ++i;
            }

            i += 2;
            while(i <= (int)s.size() && isdigit(s[i])){
                en = en * 10 + (s[i] - '0');
                ++i;
            }

            i += 4;
            mp[en] += fir;
            --i;
        }
        ve.push_back(mp);
    }



    for(int i=0;i<(int)ve.size();i++){
        string x = "";
        for(auto it : ve[i]){
            x += to_string(it.second);
            x += "x^";
            x += to_string(it.first);
            x += " + ";
        }
        x = x.substr(0,(int)x.size() - 3);
        cout << x << endl;
    }

}