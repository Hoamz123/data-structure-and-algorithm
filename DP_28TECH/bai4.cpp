#include<bits/stdc++.h>
using namespace std;
// [DP]. Bài 8. Bài toán cái túi
int f[1001][1001] = {0};//luu gia tri tu 1 den i do vat
int w[1001],v[1001];
//f[i][j] : luu tru trong luong toi da co the dat duoc voi i do vat dau tien va dung lung tui luc nay la j
int main(){
    ios_base :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n,M;cin >> n >> M;
    for(int i=1;i<=n;i++) cin >> w[i];//trong luong cua vat thu  i
    for(int i=1;i<=n;i++) cin >> v[i];//gia tri cua vat thu i
    for(int i=1;i<=n;i++){
        for(int j=1;j<=M;j++){
            if(j >= w[i]){
                f[i][j] = max(f[i-1][j],v[i] + f[i-1][j-w[i]]);
            }else{
                //TH tui ko du de chua w[i]
                // -> boi qua no
                f[i][j] = f[i-1][j];
            }
        }
    }
    cout << f[n][M];
    return 0;
}
