#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    while (b) {
        int tmp = b;
        b = a % b;
        a = tmp;
    }
    return a;
}
struct PhanSo {
    int t, m;
    void RutGon() {
        int x = gcd(abs(t), m);
        t /= x;
        m /= x;
    }
    PhanSo operator-(PhanSo b) {
        int tu = this->t * b.m - this->m * b.t;
        int mau = this->m * b.m;
        PhanSo kq({tu, mau});
        kq.RutGon();
        return kq;
    }
};
int main() {
    PhanSo a;
    cin >> a.t >> a.m;
    while (a.t) {
        int x;
        if (a.m % a.t == 0) {
            x = a.m / a.t;
        } else {
            x = a.m / a.t + 1;
        }
        PhanSo tmp({1, x});
        a = a - tmp;
        cout << "1/" << x;
        if (a.t) {
            cout << " + ";
        }
    }
    return 0;
}
