#include <bits/stdc++.h>
using namespace std;
bool f[101][100001];
int mod = 1e9 + 7;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;cin >> n;
    int a[n+1];
    int S = 0;
    for(int i=1;i<=n;i++){
        cin >> a[i];
        S += a[i];
    }
    memset(f,false,sizeof(f));
    for(int i=0;i<=n;i++) f[i][0] = true;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=S;j++){
            if(j >= a[i]){
                f[i][j] = (f[i-1][j] || f[i-1][j-a[i]]);
            }
            else f[i][j] = f[i-1][j];
        }
    }
    set<int> s;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=S;j++){
            if(f[i][j]){
                s.insert(j);
            }
        }
    }
    cout << s.size() << endl;
    for(int i : s) cout << i << " ";
}