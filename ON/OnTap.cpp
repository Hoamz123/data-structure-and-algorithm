#include<bits/stdc++.h>
using namespace std;
int n,k,a[1001],s,ok;
int used[1001];
void Try(int idx,int sum,int cnt){
    if(cnt == k){
        ok = 1;
        return;
    }
    for(int j = idx;j<=n;j++){
        if(used[j] && sum <= s){
            sum += a[j];
            used[j] = 0;
            if(sum == s){
                cnt++;
                //quay lui lai tu dau
                Try(1,0,cnt);
            }
            else{
                Try(j+1,sum,cnt);
            }
        }
        sum += a[j];
        used[j] = 1;
    }
}
int main(){
    cin >> n >> k;
    for(int i=1;i<=n;i++){
        cin >> a[i];
        s += a[i];
    }
    memset(used,1,sizeof(used));
    if(s % k != 0) cout << 0;
    else{
        s/=k;
        Try(1,0,0);
        cout << ok;
    }
    return 0;
}
