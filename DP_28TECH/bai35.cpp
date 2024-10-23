#include<bits/stdc++.h>
//[DP]. Bài 35. Odd-even
using namespace std;
#define ll long long
int main(){
    int n;cin >> n;
    int a[n+1];
    for(int i=1;i<=n;i++) cin >> a[i];
    map<int,int> mp;
    int cnt = 0;
    ll ans = 0;
    mp[0] = 1;
    for(int i=1;i<=n;i++){
        if(a[i] % 2 == 1){
            cnt++;
        }
        else cnt--;
        ans += mp[cnt];
        mp[cnt]++;
    }
    cout << ans;
}
/*
dem xem trong mang co bao nhieu day con ket thuc o vi tri i co sl le - sl chan giong nhau 
vd 5l-2c va 4l-1c -> tao thanh mot day con co 1l-1c
*/