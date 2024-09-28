#include<bits/stdc++.h>
using namespace std;
/*
xau ki tu dc goi la xau AB neu no co or la ki tu A or la ki tu B or dong thoi -> in ra all xau AB co do dai n (nhap vao tu input)
*/
int n;char a[10001];//mac dinh all cac phan tu deu la ki tu trang
bool ok;
void ktao(){
    for(int i=1;i<=n;i++){
        a[i] = 'A';//cau hinh dau tien
    }
}
void sinh(){
    int i = n;
    while(i>=1 && a[i] == 'B'){
        a[i] = 'A';
        --i;
    }
    if(i==0) ok = false;
    else{
        a[i] = 'B';
    }
}
int main(){
    int t;cin >> t;
    while(t--){
        cin >> n;
        ktao();
        ok = true;
        while(ok){
            for(int i=1;i<=n;i++){
                cout << a[i];
            }
            cout <<" ";
            sinh();//sinh ra xau tiep theo
        }
        cout << endl;
    }
}