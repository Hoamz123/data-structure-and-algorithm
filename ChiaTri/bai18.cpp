#include <bits/stdc++.h>
using namespace std;
#define ll long long
int mod = 1e9 + 10;
int main(){
    //khoang cach nho nhat luyencode
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;cin >> n;
    vector<int> a;
    vector<int> b;
    for(int i=0;i<n;i++){
        int x;cin >> x;
        a.push_back(x);
    }
    for(int i=0;i<n;i++){
        int x;cin >> x;
        b.push_back(x);
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    int res = 1e9;
    int i = 0,j = 0;
    while(i < n && j < n){
        res = min(res,abs(a[i] - b[j]));
        if(a[i] < b[j]){
            ++i;
        }
        else ++j;
    }
    cout << res;
    return 0;
}