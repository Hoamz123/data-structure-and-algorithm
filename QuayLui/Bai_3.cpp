#include<bits/stdc++.h>
using namespace std;
int n,x[1001],dx[1001];
//bai toan sinh hoan vi
/*
if(dx[i]) : gia tri i da duoc dung roi
else gia tri i chua duoc dung
*/
void display(){
    for(int i=1;i<=n;i++){
        cout << x[i];
    }
    cout << endl;
}
void Try(int i){
    for(int j=1;j<=n;j++){
        //dieu kien: Kiem tra xem co the gan dc hay khong(cac phan tu doi moi khac nhau)
        if(dx[j]==0){
            //lan dau xuat hien
            x[i] = j;
            dx[j] = 1;//danh dau la da xuat hien
            if(i==n){
                display();
            }
            else{
                Try(i+1);
            }
            //cout << i << " " << j << endl;
            dx[j] = 0;//Backtrack
        }
    }
}
int main(){
    cin >> n;
    memset(dx,0,sizeof(dx));//ham nay co tac dung cho tat ca cac phan tu trong ham dx = false
    Try(1);
}