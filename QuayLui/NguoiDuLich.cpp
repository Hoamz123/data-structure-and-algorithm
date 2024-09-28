#include<bits/stdc++.h>
using namespace std;
//bai toan du lich
int n,c[1001][1001],x[1001],res = INT_MAX,sum = 0;
void ktao(){
    cin >> n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin >> c[i][j];
        }
    }
}
int dx[1001] = {0};
void Try(int i){
    for(int j=1;j<=n;j++){
        if(dx[j] == 0){
            x[i] = j;//danh dau thanh pho thu i di qua la thanh pho j
            dx[j] = 1;//danh dau da di qua thanh pho j
            sum += c[x[i-1]][x[i]];
            if(i==n){
                res = min(res,sum + c[x[n]][1]);
            }else{
                Try(i+1);
            }
            dx[j] = 0;
            sum -= c[x[i-1]][x[i]];
        }
    }
}
int main(){
    ktao();
    x[1] = 1;//mac dinh thanh pho dau tien la thanh so 1
    dx[1] = 1;//danh dau thanh pho 1 da di qua
    Try(2);
    cout << res << endl;
}