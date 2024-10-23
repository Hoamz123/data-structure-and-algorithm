#include <bits/stdc++.h>
#include <iomanip>
using namespace std;
#define ll long long
int f[2001][2001];
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("DOIQUAT.INP", "r", stdin);
    freopen("DOIQUAT.OUT", "w", stdout);
    int m,n;cin >> m >> n;
    vector<string> v;
    v.push_back("hoamz");
    for(int i=1;i<=m;i++){
        string tmp = "";
        for(int j=1;j<=n;j++){
            char x;cin >> x;
            tmp += x;
        }
        tmp = "@" + tmp;
        v.push_back(tmp);
    }
    ll cnt = 0;//so cach chon
    memset(f,0,sizeof(f));
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            if(v[i][j] == '0'){
                if(i == 1 || j == 1){
                    f[i][j] = 1;
                }
                else{
                    f[i][j] = min({f[i-1][j-1],f[i-1][j],f[i][j-1]}) + 1;
                }
                cnt += f[i][j];
            }
            
        }
    }
    cout << cnt;
}
/*
2 4
0001
1001
6
*/