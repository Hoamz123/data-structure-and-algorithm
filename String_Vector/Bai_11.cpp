#include<bits/stdc++.h>
using namespace std;
//liet ke cac tu trong xau
/*int main(){
    string s;getline(cin,s)
    int cnt = 0;//dem cac tu trong xau
    stringstream ss(s);
    string tmp;
    while(ss >> tmp){
        cnt++;
        cout << tmp <<endl;
    }
    cout << cnt << endl;
}*/

// liet ke caca tu in hoa trong xau

//ham kiem tra tu in hoa
bool check(string s){
    for(char c  :  s){
        if(!isupper(c)) return false;
    }
    return true;
}
int main(){
    int t;cin >> t;
    cin.ignore();
    while(t--){
        string s;getline(cin,s);
        stringstream ss(s);
        string tmp;
        while(ss >> tmp){
            if(check(tmp)) cout << tmp << " ";
        }
        cout << endl;
    }
}