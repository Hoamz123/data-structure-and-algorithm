#include <bits/stdc++.h>
using namespace std;
#define ll long long
//[Tham Lam]. Bài 23. Xóa xâu kí tự
int main(){
  
    string s; cin >> s;
    vector<int> v;
    int cnt = 0;
    for(int i=0;i<(int)s.size();i++){
        if(s[i] == '1'){
            cnt++;
        }
        else{
            if(cnt != 0){
                v.push_back(cnt);
                cnt = 0;//tra lai de dem lai
            }
        }
    }
    if(cnt != 0) v.push_back(cnt);
    sort(v.begin(),v.end(),greater<int>());
    int Ti = 0;//Ti di truoc
    for(int i=0;i<(int)v.size();i++){
        if(i % 2 == 0){
            Ti += v[i];
        }
    }
    cout << Ti;
}