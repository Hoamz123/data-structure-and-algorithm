#include<bits/stdc++.h>
using namespace std;
int n = 8,a[1001][1001],x[1001],cot[1001],d1[1001],d2[1001];
void ktao(){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin >> a[i][j];
        }
    }
    memset(cot, 0, sizeof(cot));
    memset(d1, 0, sizeof(d1));
    memset(d2, 0, sizeof(d2));
    memset(x, 0, sizeof(x));
}
//X[i] = j; con hau o hang i thuoc cot j
int res = 0;
void Try(int i){
    for(int j=1;j<=n;j++){//Cac cot co the dat con hau
        if(cot[j] == 0 && d1[i-j+n] == 0 && d2[i+j-1] == 0){
            x[i] = j;
            cot[j] = 1;
            d1[i-j+n] = 1;
            d2[i+j-1] = 1;
            if(i==n){
                int sum = 0;
                for(int k=1;k<=n;k++){
                    sum += a[k][x[k]];
                }
                res = max(res,sum);
            }
            else{
                Try(i+1);
            }
            //back track
            cot[j] = 0;
            d1[i - j + n] = 0;
            d2[i + j - 1] = 0;
        }
    }
}
int main(){
    ktao();
    Try(1);
    cout << res << endl;
}
/*
*/