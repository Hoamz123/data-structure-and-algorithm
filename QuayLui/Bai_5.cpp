#include<bits/stdc++.h>
using namespace std;
int n, cot[1001],d1[1001],d2[1001];
int x[101];
void ktao(){
    cin >> n;
    memset(cot,0,sizeof(cot));
    memset(d1,0,sizeof(d1));
    memset(d2,0,sizeof(d2));
    memset(x,0,sizeof(x));
}
int cnt = 0,sum = 0;
void Try(int i){
    for(int j=1;j<=n;j++){
        if(cot[j] == 0 && d1[i-j+n] == 0 && d2[i+j-1] == 0){
            x[i] = j;//con hau o hang i nam tai cot j
            cot[j] = 1;
            d1[i-j+n] = 1;
            d2[i+j-1] = 1;
            if(i==n){
                //du mot cau hinh
                ++cnt;
            }
            else{
                Try(i+1);
            }
            //backtrack
            cot[j] = 0;
            d1[i - j + n] = 0;
            d2[i + j - 1] = 0;
        }
    }
}
int main(){
    ktao();
    Try(1);
    cout << cnt << endl;
}
/*
8
output: 92 (cach)
*/