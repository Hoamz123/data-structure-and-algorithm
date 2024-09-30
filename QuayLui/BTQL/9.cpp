#include <bits/stdc++.h>
using namespace std;
// Bài 8. Chia mảng
int n, k, a[100001],s;vector<int> v;
int d[100001];
int ok = 0;
void Try(int idx,int sum,int cnt){
    if(cnt == k){
        ok = 1;
        return;
    }
    for(int j=idx;j<=n;j++){
        if(d[j] && sum <= s){
            sum += a[j];
            d[j] = 0;
            if(sum == s){
                cnt++;
                Try(1,0,cnt);//quay lui lai tu dau
            }
            else if(sum < s){
                Try(j+1,sum,cnt);
            }
            sum -= a[j];
            d[j] = 1;
        }
    }
}
int main(){
    cin >> n >> k;s = 0;
    for(int i=1;i<=n;i++){
        cin >> a[i];
        s += a[i];
    }
    memset(d,1,sizeof(d));
    if(s % k !=0) cout << 0;
    else{
        s /= k;
        Try(1,0,0);
        cout << ok;
    }
}
/*
10 5
10 5 15 20 25 30 35 40 45 50
*/