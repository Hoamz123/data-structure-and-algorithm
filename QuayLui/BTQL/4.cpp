#include <bits/stdc++.h>
using namespace std;
int n,k,a[1001],ok;
void ktao(){
    cin >> n>> k;
    for(int i=1;i<=n;i++){
        cin >> a[i];
    }
    sort(a,a + n);
    ok = 0;
}
vector<vector<int>> v;
vector<int> tmp;
void Try(int idx,int sum){
    for(int j=idx;j<=n;j++){
        sum += a[j];
        tmp.push_back(a[j]);
        if(sum == k){
            ok = 1;
            v.push_back(tmp);
        }
        else if(sum < k){
            Try(j+1,sum);
        }
        //back track
        sum -= a[j];
        tmp.pop_back();
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ktao();
    Try(1,0);
    if(ok){
        //sort(v.begin(),v.end());
        for(vector<int> x : v){
            cout << "[";
            for(int i : x){
                if(i != *x.rbegin()) cout << i << " ";
                else cout << i << "]";
            }
            cout << endl;
        }
    }
    else cout << -1;
}
/*
10 26
12 11 9 10 6 8 14 7 5 13
[5 6 7 8]
[5 7 14]
[5 8 13]
[5 9 12]
[5 10 11]
[6 7 13]
[6 8 12]
[6 9 11]
[7 8 11]
[7 9 10]
[12 14]
*/
