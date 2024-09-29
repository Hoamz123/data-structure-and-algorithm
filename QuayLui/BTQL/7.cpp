#include <bits/stdc++.h>
using namespace std;
int n,x[1001],cot[1001],c1[1001],c2[1001],M = INT_MIN;
int a[1001][1001];
void ktao(){
    cin >> n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin >> a[i][j];
        }
    }
    memset(cot, 1, sizeof(cot));
    memset(c1, 1, sizeof(c1));
    memset(c2, 1, sizeof(c2));
}
void Try(int i){//try tu hang 1
    for(int j=1;j<=n;j++){
        if(cot[j] && c1[i+j-1] && c2[i-j+n]){
            x[i] = j;//con hau o hang i nam trne cot j
            cot[j] = 0;
            c1[i+j-1] = 0;
            c2[i-j+n] = 0;
            //Try
            if(i == n) {
                int sum = 0;
                for(int k=1;k<=n;k++){
                    sum += a[k][x[k]];
                }
                M = max(M,sum);
            }
            else{
                 Try(i+1);//
            }
           
            cot[j] = 1;
            c1[i + j - 1] = 1;
            c2[i - j + n] = 1;
        }
    }
}
int main(){
    ktao();
    Try(1);//chay tu hang 1
    cout << M;
}
/*
8
12 29 80 91 56 46 97 13
54 88 27 84 85 9 32 77
48 80 88 74 30 77 38 98
6 82 20 95 7 86 12 43
100 82 15 7 95 9 5 84
51 40 65 98 86 38 30 63
96 78 98 76 33 11 2 58
33 51 35 68 62 87 67 39
653

*/