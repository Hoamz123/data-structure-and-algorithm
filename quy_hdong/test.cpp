#include <bits/stdc++.h>
using namespace std;
int n, k, a[1000001];
vector<vector<int>> v;
void ktao()
{
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        a[i] = i + 1;
    }
}
int ok;
void solve()
{
    if (k == 0)
    {
        ok = 1;
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
    }
    else if(n%k != 0) ok = 0;
    else if (n % k == 0)
    {
        int t = n / k;
        int st = 0;
        for (int i = 0; i < t; i++)
        {
            vector<int> res;
            for (int j = 0; j < k; j++)
            {
                res.push_back(a[j + st]);
            }
            st += k;
            v.push_back(res);
        }

        for (int i = 0; i < (int)v.size(); i++)
        {
            if (i % 2 == 0)
            {
                for (int j = 0; j < (int)v[i].size(); j++)
                {
                    v[i][j] += k;
                    if (v[i][j] > n)
                    {
                        ok = 0;
                    }
                }
            }
            else
            {
                for (int j = 0; j < (int)v[i].size(); j++)
                {
                    v[i][j] -= k;
                    if (v[i][j] <= 0)
                    {
                        ok = 0;
                    }
                }
            }
        }
    }
    if (ok)
    {
        for (vector<int> x : v)
        {
            for (int i : x)
            {
                cout << i << " ";
            }
        }
    }
    else
    {
        cout << -1;
    }
}
int main()
{
    ktao();
    ok = 1;
    solve();
    return 0;
}