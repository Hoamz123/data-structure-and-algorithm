#include <bits/stdc++.h>
using namespace std;
#define ll long long

int a[1001][1001];
int n;
int dx[2] = {1, 0};
int dy[2] = {0, 1};
int u[1001][1001];
string rs = "";
string h = "";
ll res = -1;

ll cs10(string cs2) {
    ll rs = 0;
    int n = cs2.size();
    for(int i=0;i<n;i++){
        rs += (cs2[n-1-i] - '0') * pow(2,i);
    }
    return rs;
}

void Try(int i, int j) {
    if (i == n && j == n) {
        res = max(cs10(rs), res);
        return;
    }
    for (int k = 0; k < 2; k++) {
        int i1 = i + dx[k];
        int j1 = j + dy[k];
        if (i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= n && u[i1][j1] == 0) {
            rs.push_back(a[i1][j1] + '0');
            u[i1][j1] = 1;
            Try(i1, j1);
            u[i1][j1] = 0;
            rs.pop_back();
        }
    }
}

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> a[i][j];
        }
    }
    memset(u, 0, sizeof(u));
    rs.push_back(a[1][1] + '0');
    u[1][1] = 1;
    Try(1, 1);
    ll x = res;
    while(x > 0){
        int pd = x % 16;
        if(pd < 10){
            h.push_back(pd + '0');
        }
        else{
            h.push_back(pd - 10 + 'A');
        }
        x /= 16;
    }
    reverse(h.begin(),h.end());
    cout << h;
    return 0;
}
