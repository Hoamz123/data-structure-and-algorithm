#include<bits/stdc++.h>
using namespace std;
//[DP]. Bài 4. Dãy con có tổng bằng S(moi phan tu su dung mot lan)
#define ll long long
int mod = 1e9 + 7;
bool f[201][1000001];
int main(){
    ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,s;cin >> n >> s;
    int a[n+1];
    for(int i=1;i<=n;i++) cin >> a[i];
    memset(f,false,sizeof(f));
    for(int i=0;i<=n;i++) f[i][0] = true;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=s;j++){
            if(j >= a[i]){
                f[i][j] = (f[i-1][j - a[i]] || f[i-1][j]);
            }
            else{
                f[i][j] = f[i-1][j];
            }
        }
    }
    cout << f[n][s];
}
/*
8 92
69 16 82 170 31 24 45 112
1
*/