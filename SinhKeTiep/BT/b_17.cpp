#include<bits/stdc++.h>
using namespace std;
//nhap vao so chan N in ra cac xau nhi phan co do dai chan khong vuot qua N va tm tc doi xung
//neu N lon_> chi can sinh nhung ma nhi phan dai = n/2 -> lat ngc lai roi nối vào đuôi lúc chưa nhập
int n,ok;
string s;
vector<string> v;
void sinh(){
    int i = s.length() - 1;
    while(i>=0 && s[i] == '1'){
        s[i] = '0';
        --i;
    }
    if(i==-1) ok = false;
    else s[i] = '1';
}
void init(){
    for(int i=1;i<=15;i++){
        ok = 1;
        s = string(i,'0');//khoi tao cau hinh ban dau
        while(ok){
            string tmp = s;
            reverse(tmp.begin(),tmp.end());
            v.push_back(s + tmp);
            sinh();
        }
    }
}
int main(){
    int t;cin >> t;
    while(t--){
        cin >> n;
        init();
        for(string x: v){
            if((int)x.length() <= n){
                cout << x << " ";
            }
            else{
                break;
            }
        }
        cout << endl;
    }
    return 0;
}