#include<bits/stdc++.h>
using namespace std;
//bai toan con hau
//ban co co n*n
//xep n  con hau nen ban co vua sao cho ko co 2 con hau nao awn nhau
/*x[i] = j;//con hau o hang thu i nam o cot j
x = {x1,x2,,,,xn};*/

int n,cot[1001],d1[1001],d2[1001],x[1001];
void ktao(){
    memset(cot,0,sizeof(cot));
    memset(d1,0,sizeof(d1));
    memset(d2,0,sizeof(d2));
}
void Try(int i){
    for(int j=1;j<=n;j++){
        if(cot[j] == 0 && d1[i-j+n] == 0 && d2[i+j-1] == 0){
            x[i] = j;
            cot[j] = 1;
            d1[i-j+n] = 1;
            d2[i+j-1] = 1;
            if(i==n){
                for(int k=1;k<=n;k++){
                    cout << "Con hau o hang thu " << k << " Nam o cot thu " << x[k] << endl;
                }
                cout << endl;
            }
                Try(i+1);
                //back track
                cot[j] = 0;
                d1[i - j + n] = 0;
                d2[i + j - 1] = 0;
        }
    }
}
int main(){ 
    ktao();
    cin >> n;
    Try(1);
    return 0;
}