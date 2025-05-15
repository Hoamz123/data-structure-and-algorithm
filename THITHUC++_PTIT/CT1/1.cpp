#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    priority_queue<ll, vector<ll>, greater<ll>> q;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        q.push(x);
    }
    ll tong = 0;
    while (q.size() > 1)
    {
        ll x = q.top();
        q.pop();
        ll y = q.top();
        q.pop();
        tong += (x + y);
        q.push(x + y);

    }
    cout << tong << " " << q.top();
    return 0;
}