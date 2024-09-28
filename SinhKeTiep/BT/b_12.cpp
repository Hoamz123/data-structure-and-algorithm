#include<bits/stdc++.h>
using namespace std;
#define ll long long
string s;int ok;int n;
vector<string> res;
ll a[501];//luu cac boi cua cac so tu 1 _ .500
void sinh(){
    int i = s.size() - 1;
    while(i>=0 && s[i] == '9'){
        s[i] = '0';
        --i;
    }
    if(i==-1) ok = false;
    else s[i] = '9';
}
int main(){
    s = "00000000000000";//khoi tao cau hinh ba dau
    ok = 1;
    while(ok){
        res.push_back(s);
        sinh();
    }
    for(int i=1;i<=500;i++){
        for(string x : res){
            ll tmp = stoll(x);
            if(tmp != 0 && tmp % i == 0){
                a[i] = tmp;
                break;
            }
        }
    }
    int t;cin >> t;
    while(t--){
        cin >> n;
        cout << a[n] << endl;//a[n] la boi nho nhat cua n
    }
}
