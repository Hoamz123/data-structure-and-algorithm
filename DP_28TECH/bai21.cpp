//[DP]. Bài 21. Distinct sum
#include<bits/stdc++.h>
using namespace std;
int a[100001];
bool f[501][501];
int main(){
    int n;cin >> n;
    int s = 0;
    for(int i=1;i<=n;i++){
        cin >> a[i];
        s += a[i];
    }
    memset(f,false,sizeof(f));
    for(int i=0;i<=n;i++){
        f[i][0] = true;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=s;j++){
            if(j >= a[i]){
                f[i][j] = (f[i-1][j-a[i]] || f[i-1][j]);
            }
            else{
                f[i][j] = f[i-1][j];
            }
        }
    }
    set<int> se;
    se.insert(0);//case xau con rong
    for(int i=1;i<=n;i++){
        for(int j=1;j<=s;j++){
            if(f[i][j]){
                se.insert(j);
            }
        }
    }
    for(int i: se) cout << i << " ";
}