#include<bits/stdc++.h>
using namespace std;
int n,cot[1001],d1[1001],d2[1001];
char a[1001][1001];
void ktao(){
    cin >> n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            a[i][j] = '.';
        }
    }
    memset(cot,0,sizeof(cot));
    memset(d1,0,sizeof(d1));
    memset(d2,0,sizeof(d2));
}
void display(){
    for(int i=1;i<=n;i++){
        for(int j =1;j<=n;j++){
            cout << a[i][j];
        }
        cout << endl;
    }
    cout << endl;
}
void Try(int i){
    for(int j=1;j<=n;j++){
        if(cot[j] == 0 && d1[i-j+n] == 0 && d2[i+j-1] == 0){
            a[i][j] = 'Q';
            cot[j] = 1;
            d1[i-j+n] = 1;
            d2[i+j-1] = 1;
            if(i==n){
                //den hang cuoi
                display();
            }
            else{
                Try(i+1);
            }
            //back track
            a[i][j] = '.';
            cot[j] = 0;
            d1[i - j + n] = 0;
            d2[i + j - 1] = 0;
        }
    }
}
int main(){
    ktao();
    Try(1);
}