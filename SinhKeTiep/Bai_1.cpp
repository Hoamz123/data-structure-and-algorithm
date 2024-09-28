//sinh nhi phan
//sinh phan hoach

//xay dung cau hinh dau tien
/*
while(<chua phai cau hinh cuoi cung>){
    in ra cau hinh hien tai
    sinh ra cau hinh tiep theo
}
*/
// bai toan sinh so nhi phan
#include<bits/stdc++.h>
using namespace std;
int n,x[100];//n luu so bit,x[] luu cac cau hinh
bool ok = true;
void ktao(){
    ///cau hinh dau tien deu la cac bit 0
    for(int i=1;i<=n;i++){
        x[i] = 0;
    }
}

void sinh(){
    //sinh ra cac cau hinh ke tiep
    //bat dau tu bit cuoi cung
    int i = n;
    while(i >= 1 && x[i] == 1){
        x[i] = 0;
        --i;
    }
    //tim dc bit dau tien = 0 tu ben phai
    if(i==0) ok = false;//toan bo bit la so 1
    else  x[i] = 1;
}
int main(){
    cin >> n;
    ktao();
    while(ok){
        for(int i=1;i<=n;i++){
            cout << x[i] << " ";
        }
        cout << endl;
        sinh();
    }
}
