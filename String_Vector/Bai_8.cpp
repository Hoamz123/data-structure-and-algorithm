#include<bits/stdc++.h>
using namespace std;
//mot xau chua tat ca ki tu khong phan biet hoa thuong duoc goi la xau Prangram
int main(){
    int t;cin >> t;
    cin.ignore();
    while(t--){
        string a;getline(cin,a);
        for(char c : a){
            c = tolower(c);
        }
        set<char> s;
        for(char c: a){
            s.insert(c);
        }
        if(s.size() == 26){
            cout << "Yes" << endl;
        }else cout << "No" << endl;
    }
}
/*
input: 
2
QWErtyuioplkjhgfdsazxcvbnmmmj
qwrrrt

*/