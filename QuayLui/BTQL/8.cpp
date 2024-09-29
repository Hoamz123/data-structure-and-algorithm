#include <bits/stdc++.h>
using namespace std;
int n,x,a[1001],ok;
void ktao(){
    cin >> n >> x;
    for(int i=1;i<=n;i++){
        cin >> a[i];
    }
    sort(a+1,a+n+1);
    ok = 0;
}
vector<vector<int>> v;
vector<int> tmp;int cnt = 0;
void Try(int idx,int sum){
    for(int j=idx;j<=n;j++){
        sum += a[j];
        tmp.push_back(a[j]);
        if(sum == x){
            ok = 1;
            cnt++;
            v.push_back(tmp);
        }
        else if(sum < x){
            Try(j,sum);
        }
        sum -= a[j];
        tmp.pop_back();
    }
}
int main(){
    ktao();
    Try(1,0);
    if(ok){
        sort(v.begin(),v.end());
        cout << cnt << endl;
        for(vector<int> x : v){
            cout << "{";
            for(int i=0;i<(int)x.size();i++){
                if(i != (int)x.size() - 1) cout << x[i] << " ";
                else cout << x[i] << "}";
            }
            cout << endl;
        }
    }
    else cout << -1;
}
/*
3 10
4 2 3
5
{2 2 2 2 2}
{2 2 2 4}
{2 2 3 3}
{2 4 4}
{3 3 4}

*/
