#include<bits/stdc++.h>
using namespace std;
int n,s,a[1001],x[1001],ok;
void ktao(){
    cin >> n >> s;
    for(int i=1;i<=n;i++){
        cin >> a[i];
    }
    sort(a + 1,a + n + 1);
    ok = 0;
}
int m = 1e9;
void Try(int i,int idx,int sum){
    for(int j=idx;j<=n;j++){
        if(sum + a[j] <= s){
            x[i] = a[j];
            if(sum + a[j] == s){
                ok = 1;
                m = min(m,i);
            }
            else Try(i+1,j+1,sum + a[j]);
        }
        else return;
    }
}
int main(){
    ktao();
    Try(1,1,0);
    if(ok) cout << m << endl;
    else cout << -1;
}
/*
6 30
10 4 10 5 8 8
4
*/