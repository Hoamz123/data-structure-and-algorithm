#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int>> v;
#define ll long long
//accepted
ll f[101][100001] = {0};//f[i][j] gia tri lon nhat cua cac do vat xet tren i phan tu dau tien co trong luong toi da la j
int main(){
    ios_base:: sync_with_stdio(0);cin.tie(0);cout.tie(0);
    v.push_back({-1e3,-1e3});//de chi so bat dau tinh tu 1
    int n,S;cin >> n >> S;
    for(int i=1;i<=n;i++){
        int x,y;cin >> x >> y;
        v.push_back({x,y});
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=S;j++){
            if(j >= v[i].first){
                //co the lay hoac khong lay
                f[i][j] = max(f[i-1][j],f[i-1][j-v[i].first] + v[i].second);
            }
            else{
                //bat buoc khong lay
                f[i][j] = f[i-1][j];
            }
        }
    }
    cout << f[n][S];
}