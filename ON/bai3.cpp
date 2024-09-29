#include<bits/stdc++.h>
using namespace std;
int n,a[1001][1001],x[1001],dx[1001],cmin = INT_MAX;
void ktao(){
    cin >> n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin >> a[i][j];
            if(a[i][j]){
                cmin = min(cmin,a[i][j]);
            }
        }
    }
    memset(dx,0,sizeof(dx));
    memset(x,0,sizeof(x));
}
int sum,res = INT_MAX;
void Try(int i){
    for(int j=1;j<=n;j++){
        if(dx[j] == 0){
            x[i] = j;
            dx[j] = 1;//danh dau da di qua roi
            sum += a[x[i-1]][x[i]];
            if(i==n){
                res = min(sum + a[x[n]][1],res);
            }
            else if(sum + (n-i+1)*cmin < res){
                Try(i+1);
            }
            dx[j] = 0;
            sum -= a[x[i-1]][x[i]];
        }
    }
}

int main(){
    ktao();
    sum = 0;
    x[1] = 1;//danh dau thanh pho dau tien mac dinh la thanh pho thu 1
    dx[1] = 1;
    Try(2);
    cout << res << endl;
}