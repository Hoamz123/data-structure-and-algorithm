#include<bits/stdc++.h>
using namespace std;
int n,cot[1001],d1[1001],d2[1001],x[101];
void ktao(){
    cin >> n;
    memset(cot,0,sizeof(cot));
    memset(d1,0,sizeof(d1));
    memset(d2,0,sizeof(d2));
    memset(x,0,sizeof(x));
}
int cnt;
void Try(int i){
    for(int j=1;j<=n;j++){
        if(cot[j] == 0 && d1[i-j+n] == 0 && d2[i+j-1] == 0){
            //x[i] = j;
            cot[j] = 1;
            d1[i-j+n] = 1;
            d2[i+j-1] = 1;
            if(i==n){
                cnt++;
            }
            else{
                Try(i+1);
            }
            cot[j]= 0;
            d1[i-j+n] = 0;
            d2[i+j-1] = 0;
        }
    }
}
int main(){
    ktao();cnt = 0;
    Try(1);
    cout << cnt << endl;
}