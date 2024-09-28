#include<bits/stdc++.h>
using namespace std;
//sinh phan hoach : sinh cach bieu dien so tu nhien N duoi dang tong cac so tu nhien <=N
int n,cnt,a[1001],ok;
void ktao(){
    cnt = 1;
    a[1] = n;//cau hinh dau tien
}
void sinh(){
    int i=cnt;
    while(i>=1 && a[i] == 1){
        --i;
    }
    if(i==0) ok = 0;
    else{
        a[i]--;
        int thieu = cnt - i + 1;
        int x = thieu / a[i];
        int y = thieu % a[i];
        cnt = i;
        for(int j=1;j<=x;j++){
            a[cnt + 1] = a[i];
            ++cnt;
        }
        if(y){
            //chia khong het cho a[i];
            a[cnt + 1] = y;
            ++cnt;
        }
    }
}
int main(){
    cin >> n;
    ktao();ok = 1;
    while(ok){
        for(int i=1;i<=cnt;i++){
            cout << a[i] << " ";
        }
        cout << endl;
        sinh();
    }
}
/*
5
5
4 1
3 2
3 1 1
2 2 1
2 1 1 1
1 1 1 1 1
*/