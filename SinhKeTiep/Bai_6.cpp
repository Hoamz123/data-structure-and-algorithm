#include<bits/stdc++.h>
using namespace std;
//thuat toan chuyen tu ma gray sang ma nhi phan
//bit dau tien cua ma nhi phan va ma gray la giong nhau
//cac bit thu i con lai: Kiem tra ki tu thu i cua ma gray
// Neu bit thu i cua ma gray la 0 thi bit thu i cua ma nhi phan se copy bit thu i - 1 cua ma nhi phan
// Neu bit thu i cua ma gray la 1 thi bit thu i cua ma nhi phan se = lật cua bit thu i-1 cua ma nhi phan (0->1 , 1->0)
void solve(string s){
    string res = "";
    res += s[0];
    for(int i=1;i<(int)s.length();i++){
        if(s[i] == '1'){
            if(res[i-1] == '0') res += "1";
            else res += "0";
        }
        else{
            res += res[i-1];
        }
    }
    cout << res << endl;
}
int main(){
    int t;cin >> t;
    while(t--){
        string s;cin >> s;//ma Gray
        solve(s);
    }
    return 0;
}
/*
2
01101
01011
output:
01001
01101
*/