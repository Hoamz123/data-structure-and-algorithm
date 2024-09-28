#include<bits/stdc++.h>
using namespace std;
////sinh to hop chap k cua n(y/c : phan tu sau > ptu truoc)
int n,k,x[100];
bool ok;
void ktao(){
    // cau hinh dau tien tu 1 -> k
    for(int i=1;i<=k;i++){
        x[i] = i;
    }
}
void sinh(){
    //bat dau tu bit thu k,kiem tra xe x[k] dat max hay chua
    //x[i] = N-K+I: hay chua (n-k+i : gia tri lon nhat ma phan tu tai i co the tang nen dc)
    // if X[i] = N-K+i : khong the tang x[i] nen nua -> dich sang trai (--i)
    // else X[i] != n-l+i -> x[i]++;
    int i = k;
    while(i>=1 && x[i] == n-k+i){
        --i;
    }
    //case 1: i van nam trong doan tu 1->k
    //case 2: i = 0(da gap cau hinh cuoi cung)
    if(i==0){
        ok = false;//cau hinh cuoi cung dung thuat toan
    }
    else{
        x[i]++;
        for(int j=i+1;j<=k;j++){
            x[j] = x[j-1] + 1; 
        }
    }
}
int main(){
    cin >> n >> k;
    ktao();
    ok = true;
    while(ok){
        for(int i=1;i<=k;i++){
            cout << x[i];
        }
        cout << endl;
        sinh();
    }
}