#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;
const int MAX = 1000001; // Giới hạn lớn nhất của n

long long fact[MAX], invFact[MAX];

// Hàm tính lũy thừa nhị phân: x^y % p
long long power(long long x, long long y, long long p) {
    long long res = 1;
    x = x % p;
    while (y > 0) {
        if (y & 1) res = (res * x) % p;//y le
        y = y >> 1;//dich bit sang phai <=> chia 2 lay phan nguyen duoi
        x = (x * x) % p;
    }
    return res;

}
// Tiền tính giai thừa và nghịch đảo modulo
void preprocess(int p) {
    fact[0] = 1;
    for (int i = 1; i < MAX; i++) {
        fact[i] = (fact[i - 1] * i) % p;
    }
    // Tính nghịch đảo modulo của fact[MAX-1] theo p
    invFact[MAX - 1] = power(fact[MAX - 1], p - 2, p);
    for (int i = MAX - 2; i >= 0; i--) {
        invFact[i] = (invFact[i + 1] * (i + 1)) % p;
    }
    /*
        (i)^-1 = ( ((i+1))^-1 * (i+1) ) % MOD;Cong thuc dung tinh nghich dao mod cua i khi biet nghich dao mod cua i+1
    */
}

// Tính C(n, k) % p
long long C(int n, int k, int p) {
    if (k > n) return 0;
    return (fact[n] * invFact[k] % p) * invFact[n - k] % p;
}

int main() {
    preprocess(MOD);
    int n,m,k;
    cin >> n >> m >> k;
    vector<pair<int,int>> adj;
    for(int i = 0;i<k;i++){
        int x,y;cin >> x >> y;
        adj.push_back({x,y});
    }
    sort(adj.begin(),adj.end());

    vector<long long> dp(k,0);
    for(int i = 0;i<k;i++){
        int x = adj[i].first;int y = adj[i].second;
        dp[i] = C(x + y - 2,x - 1,MOD);//tong so duong di tu 1,1 -> x,y

        for(int j = 0;j<i;j++){
            int x1 = adj[j].first;int y1 = adj[j].second;
            if(x1 <= x && y1 <= y){
                long long tmp = dp[j] * C(x - x1 + y - y1,x - x1,MOD) % MOD;//tong so duong di tu 1,1 -> x,y ma di qua x1,y1
                dp[i] = (dp[i] - tmp + MOD) % MOD;//loai bo nhung duong di qua x1,y1 -> x,y
            }
        }
    }

    long long res = C(n+m-2,n-1,MOD);
    cout << res << endl;
    for(int i=0;i<k;i++){
        int x = adj[i].first;int y = adj[i].second;
        long long tmp = (dp[i] * C(n-x+m-y,n-x,MOD)) % MOD;
        res = (res - tmp + MOD) % MOD;
    }
    cout << res;
    return 0;
}

/*
4 5 5
2 2
2 3
2 4
4 2
4 3
*/