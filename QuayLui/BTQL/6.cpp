#include <bits/stdc++.h>
using namespace std;
int n,x[1001],cot[1001],c1[1001],c2[1001];
void ktao(){
    cin >> n;
    memset(cot, 1, sizeof(cot));
    memset(c1, 1, sizeof(c1));
    memset(c2, 1, sizeof(c2));
}
int cnt = 0;
void Try(int i){//try tu hang 1
    for(int j=1;j<=n;j++){
        if(cot[j] && c1[i+j-1] && c2[i-j+n]){
            cot[j] = 0;
            c1[i+j-1] = 0;
            c2[i-j+n] = 0;
            //Try
            if(i == n) cnt++;
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
    cout << cnt;
}