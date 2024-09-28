#include<bits/stdc++.h>
using namespace std;
int n,k,a[1001];
//Bai toan sinh to hop chap k cua n
void display(){
    for(int i=1;i<=k;i++){
        cout << a[i];
    }
    cout << endl;
}
void Try(int i){
    //x[i-1] + 1: gia tri nho nhat ma phan tu x[i] co the dat duoc
    //n-k+i:gia tri lon nhat ma phan tu x[i] co the dat duoc
    for(int j=a[i-1]+1;j<=n-k+i;j++){
        a[i] = j;
        if(i==k){
            display();
        }
        else{
            Try(i+1);
        }
    }
}
int main(){
    cin >> n >> k;
    Try(1);
}