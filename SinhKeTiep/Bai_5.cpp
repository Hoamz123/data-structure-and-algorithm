#include<bits/stdc++.h>
using namespace std;
//ma Gray
//Thuat toan chuyen tu ma nhi phan sang ma Gray
//bit dau tien cua ma Gray va ma Nhi phan la nhu nhau
//cac bit con lai o ma nhi phan duoc cho = cach XOR 2 bit thu i va thu i - 1 cua ma gray
// n -> 2^n cau hinh xau Gray
int a[1001];
int main(){
    string s = "0110101";
    int n = s.size();
    string result = "";
    result += s[0];
    for(int i=1;i<n;i++){
        result += (s[i-1] ^ s[i]) +'0';
    }
    cout << result << endl;
}
