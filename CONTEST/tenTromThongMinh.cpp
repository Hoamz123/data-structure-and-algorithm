#include<bits/stdc++.h>
using namespace std;
int n,M;
int f[5001][5001] = {0};
vector<pair<int,int>> v;
int main(){
    cin >> n >> M;
    v.push_back({-1,-1});
    for(int i=1;i<=n;i++){
        int x,y;cin >> x >> y;
        v.push_back({x,y});
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=M;j++){
            if(j >= v[i].first){
                f[i][j] = max(f[i-1][j],f[i-1][j-v[i].first] + v[i].second);
            }else{
                //bo
                f[i][j] = f[i-1][j];
            }
        }
    }
    cout << f[n][M];
}