#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll a[1000001];
int n, k;
int bs_f(int i,int n, ll a[], ll x)
{
    int r = n - 1;
    int l = i+1;
    int res = -1;
    while (l <= r)
    {
        int m = (l + r) / 2;
        if (a[m] == x)
        {
            r = m - 1;
            res = m;
        }
        else if (a[m] > x)
        {
            r = m - 1;
        }
        else
        {
            l = m + 1;
        }
    }
    return res;
}

int bs_l(int i,int n, ll a[], ll x)
{
    int r = n - 1;
    int l = i+1;
    int res = -1;
    while (l <= r)
    {
        int m = (l + r) / 2;
        if (a[m] == x)
        {
            l = m + 1;
            res = m;
        }
        else if (a[m] > x)
        {
            r = m - 1;
        }
        else
        {
            l = m + 1;
        }
    }
    return res;
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n >> k;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    ll cnt = 0;//ac
    for (int i = 0; i < n; i++)
    {
        ll x = a[i] + k;
        int f = bs_f(i,n, a, x);
        int l = bs_l(i,n, a, x);
        if (f != -1 && l != -1 && f <= l)
        {
            cnt += (l - f + 1);
        }
        //a[i] = -1000000000;
    }

    cout << cnt;
}