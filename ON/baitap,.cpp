#include <bits/stdc++.h>
using namespace std;
#define ll long long
int n,S;
int t[1001],d[1001];
int M = -1e9;
//con nghe di cay
void Try(int idx,int sum,int point){
    if(sum > S) return;
    M = max(M,point);
    for(int i=idx;i<n;i++){
        Try(i+1,sum + t[i],point + d[i]);
    }
}
int main(){
    cin >> n >> S;
    for(int i=0;i<n;i++){
        cin >> t[i];
    }
    for(int i=0;i<n;i++){
        cin >> d[i];
    }
    Try(0,0,0);
    cout << M << endl;
    return 0;
}