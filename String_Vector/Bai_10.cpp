#include<bits/stdc++.h>
using namespace std;
//bat buoc phai thay doi  1 ki tu trong xau,kt co the bien no -> xau doi xung hay khong
//viet ham tra ve so lan khong khop
bool cnt(string s){
    int l = 0,r = s.size() - 1;
    int res = 0;
    while(l<=r){
        if(s[l] != s[r]){
            res++;
        }
        l++;r--;
    }
    if(s.size() % 2  == 0  && res == 0) return false;//xau chan da dx 
    if(res > 1) return false;
    return true;
}
int main(){
    int t;cin >> t;
    cin.ignore();
    while(t--){
        string s;getline(cin,s);
        if(cnt(s)){
            //chi co mot cap ko khop
            cout << "Yes" << endl;
        }
        else cout << "No" << endl;
    }
}