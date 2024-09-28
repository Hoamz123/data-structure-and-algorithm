#include<bits/stdc++.h>
using namespace std;
/*
xau ki tu dc goi la xau AB neu no chi co or la ki tu A or la ki tu B or dong thoi ca A va B
nhap vao 2 so N,K in ra tat ca nhung xau AB tm : dai N va co dung 1 day K ki tu A lien tiep : VD: BAAABB (N = 6,K = 3)
*/
int n,k;char a[1001];
int ok;
void ktao(){
    for(int i=1;i<=n;i++){
        a[i] = 'A';
    }
}
void sinh(){
    int i = n;
    while(i>=1 && a[i] == 'B'){
        a[i] = 'A';
        --i;
    }
    if(i==0) ok = 0;
    else a[i] = 'B';
}
bool check(){
    int res = 0;//dem so day co K ki tu A lien tiep
    int cnt = 0;
    for(int i=1;i<=n;i++){
        if(a[i] == 'A'){
            cnt++;//dem so phan tu A lien tiep
        }
        else cnt = 0;//dut day
        if(cnt > k) return false;//TH AAAA -> se co 2 day co 3 ki tu A lien tiep (vi pham)
        if(cnt == k) res++;
    }
    return res == 1;
}
int main(){
    cin >> n >> k;
    ktao();
    ok = 1;
    vector<string> v;
    while(ok){
        string s = "";
        if(check()){
            //tm dieu kien
            for(int i=1;i<=n;i++){
                s += a[i];
            }
            v.push_back(s);
        }
        sinh();
    }
    cout << v.size() << endl;
    for(string s: v){
        cout << s << endl;
    }
}