#include<bits/stdc++.h>
using namespace std;
int n, x[1001], cot[1001], d1[1001], d2[1001], a[1001][1001];
int res;

void ktao() {
    n = 8;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> a[i][j];
        }
    }
    memset(cot, 0, sizeof(cot));
    memset(d1, 0, sizeof(d1));
    memset(d2, 0, sizeof(d2));
}

void Try(int i) {
    for (int j = 1; j <= n; j++) {
        // Kiểm tra xem có thể đặt quân hậu tại vị trí (i, j) không
        if (cot[j] == 0 && d1[i - j + n] == 0 && d2[i + j - 1] == 0) {
            // Đặt quân hậu tại (i, j)
            x[i] = j;//con hau o hang i nam tren cot j
            cot[j] = 1;
            d1[i - j + n] = 1;
            d2[i + j - 1] = 1;

            if (i == n) {
                // Nếu đã đặt đủ 8 quân hậu, tính tổng giá trị
                int sum = 0;
                for (int k = 1; k <= n; k++) {
                    sum += a[k][x[k]];
                }
                res = max(res, sum);
            } else {
                Try(i + 1); // Tiếp tục với hàng tiếp theo
            }

            // Quay lui (backtrack)
            cot[j] = 0;
            d1[i - j + n] = 0;
            d2[i + j - 1] = 0;
        }
    }
}

int main() {
    ktao();
    res = 0;
    Try(1);
    cout << res << endl;
}
/*
1 2 3 4 5 6 7 8
9 10 11 12 13 14 15 16
17 18 19 20 21 22 23 24
25 26 27 28 29 30 31 32
33 34 35 36 37 38 39 40
41 42 43 44 45 46 47 48
49 50 51 52 53 54 55 56
57 58 59 60 61 62 63 64
260
*/