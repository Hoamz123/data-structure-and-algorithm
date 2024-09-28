#include<bits/stdc++.h>
using namespace std;
#define ll long long
//Xau ki tu co ban
/*
//Bang ma ASCII
a->z:97->122
A->Z: 26 KI TU:65->90
0->9:49->57

islower(char c) : kiem tra in thuong
isupper(char c) : kiem tra in hoa
isalpha(char c) : kiem tra chu cai
isdigit(char c):kiem tra mot so
*/

//int main(){
    // tach cac tu ngan cach boi dau " "
    /*string s = "dinh van hoa";
    stringstream ss(s)ll;
    string tmp;
    while(ss >> tmp){
        cout << tmp << endl;
    }*/

    //tach cac tu ngan cach boi ki tu dac biet
    //string s = "dinh-van-hoa";
    //stringstream ss(s);
    //string tmp;
    //while(getline(ss,tmp,'-')){
    //    cout << tmp << endl;
   // }
//}
//chuyen mot xau k itu ve ll
ll convert(string s){
    ll rs = 0;
    for(char c: s){
        rs = rs*10 + c-'0';
    }
    return rs;
}
string conv(ll n){
    string s = to_string(n);
    return s;
}
int main(){
    /*string s = "11234456647";
    ll rs = convert(s);
    cout << rs << endl;*/
    ll n = 1223424456;
    string s = conv(n);
    cout << s << endl;
}