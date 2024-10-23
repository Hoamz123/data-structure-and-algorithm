#include<bits/stdc++.h>
using namespace std;
//day con tang chat dai nhat khong nhat thiet phai lien tuc
int a[100001],n;
int f[100001];
int main(){
    //O(n2)
    ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n;int ans = 0;
    for(int i=1;i<=n;i++) cin >> a[i];
    for(int i=1;i<=n;i++){
        f[i] = 1;
        for(int j=1;j<i;j++){
            if(a[j] < a[i]){
                f[i] = max(f[i],f[j]+1);
            }
        }
        ans = max(ans,f[i]);
    }
    cout << ans;
}