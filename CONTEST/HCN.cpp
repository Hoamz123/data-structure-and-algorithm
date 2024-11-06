#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    freopen("DIENTICH.INP","r",stdin);
    freopen("DIENTICH.OUT","w",stdout);
    int R;cin >> R;
    int Smax = -1e9;
    if(R < 2) cout << 0;
    else{
        for(int y = 1;y < R;y++){
            int x = sqrt(R*R - y*y);
            Smax = max(Smax,2*x*2*y);
        }
        cout << Smax;
    }
}