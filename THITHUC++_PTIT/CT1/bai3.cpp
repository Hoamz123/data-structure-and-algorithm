#include<bits/stdc++.h>
using namespace std;

/*

Cho số nhị phân N, hãy kiểm tra xem N có chia hết cho 5 hay không.

Gợi ý : Chuyển số N thành dạng thập phân nhưng trong quá trình chuyển cần áp dụng đồng dư để lấy số dư của số thập phân vs 5.
*/
bool check(string s){
    int x = 0;int l = s.size();
    for(int i=0;i<l;i++){
        x = (x * 2 + (s[i] - '0')) % 5;
    }
    if(x == 0) return true;
    return false;
}


int cs10(string s){
    int x = 0;
    for(char i : s){
        x = x * 2 + (i - '0');
    }
    return x;
}

int main(){
    string n;cin >> n;
    if(check(n)){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    cout << cs10(n);
}