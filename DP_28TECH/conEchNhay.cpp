#include<bits/stdc++.h>
using namespace std;
/*
Một con ếch có thể nhảy 1, 2, 3 bước để có thể lên đến một đỉnh cần đến. Hãy
đếm số các cách con ếch có thể nhảy đến đỉnh.
Số nguyên dương N mô tả số bước con ếch cần di chuyển để nhảy tới đỉnh
*/
int main(){
    int n;cin >> n;
    int f[50] = {0};
    f[0] = 1;//luc chua nhay luon co mot cach de nen bac 1
    for(int i=1;i<=n;i++){
        for(int j=1;j<=3;j++){
            if(i >= j){
                f[i] += f[i-j];
            }
        }
    }
    cout << f[n];
}