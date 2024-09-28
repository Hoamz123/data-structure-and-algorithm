#include<bits/stdc++.h>
using namespace std;
string s;int ok;int n;
void sinh(){
    int i = n - 2;
    while(i>=0 && s[i] > s[i+1]){
        --i;
    }
    if(i==-1) ok = 0;
    else{
        int j = n-1;
        while(s[i] > s[j]){
            --j;
        }
        swap(s[i],s[j]);
        reverse(s.begin()+i+1,s.end());
    }
}
int main(){
    int t;cin >> t;
    while(t--){
        cin >> s;n = s.size();
        sort(s.begin(),s.end());//dam bao cac cau hinh tang dan theo tu dien
        ok = 1;
        while(ok){
            cout << s << " ";
            sinh();
        }
        cout << endl;
    }
    return 0;
}
/*
2
AB
AB BA
ABCD
ABCD ABDC ACBD ACDB ADBC ADCB BACD BADC BCAD BCDA BDAC BDCA CABD CADB CBAD CBDA CDAB CDBA DABC DACB DBAC DBCA DCAB DCBA
*/