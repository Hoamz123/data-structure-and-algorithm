#include<bits/stdc++.h>
using namespace std;
// sinh hoan vi (so cau hinh la n!)
int n,a[1000];//khai bao toan cuc
bool ok;
void ktao(){
    for(int i=1;i<=n;i++){
        a[i] = i;
        //cau hinh dau tien tu 1->n
    }
}
void sinh(){
    //bat dau tu vi tri n - 1
    //trung nao a[i] > a[i+1] dich sang ben trai
    int i = n-1;
    while(i>=1 && a[i] > a[i+1]){
        --i;//dich sang ben trai
    }
    //case 1: i==0(cau hinh cuoi cung)
    if(i==0) ok = false;
    else{
        //case 2: a[i] < a[i+1]
        //tim so dung sau vi tri i, so do > a[i] ,va nho nhat co the
        int j = n;//bat dau tu chi so chuoi cung,bo qua cac vi tri ma a[j] < a[i]
        while(a[i] > a[j]){
            j--; //dich trai
        }
        //sau while ->a[j] nho nhat > a[i];
        swap(a[i],a[j]);
        //sort cac phan tu tu i+1 -> n theo thu tu tang dan - >mot so moi > so cu nhung nho nhat co the
        //sort(a+i+1,a+n+1);//0(nlog(n))
        //or do cac phan tu tu i+1 -> n la diay giam dan - .chi can dao ngc laij -> tang dan
        reverse(a+i+1,a+n+1);//0(log(n))
    }
}
int main(){
    cin >> n;
    ktao();
    ok = true;
    while(ok){
        for(int i=1;i<=n;i++){
            cout << a[i] << " ";
        }
        cout << endl;
        sinh();
    }
}