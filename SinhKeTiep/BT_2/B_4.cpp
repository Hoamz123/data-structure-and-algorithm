#include<bits/stdc++.h>
using namespace std;
int n,k,a[1001],ok,b[1001];
void ktao(){
    for(int i=1;i<=k;i++){
        a[i] = i;
    }
}
void sinh(){
    int i = k;
    while(i>=1 && a[i] == n-k+i){
        --i;
    }
    if(i==0) ok = 0;
    else{
        a[i]++;
        for(int j=i+1;j<=k;j++){
            a[j] = a[j-1] + 1;
        }
    }
}
int main(){
    cin >> n >> k;
    set<int> s;
    for(int i=0;i<n;i++){
        int x;cin >> x;
        s.insert(x);
    }
    n = s.size();
    vector<int> v;
    for(int x : s){
        v.push_back(x);
    }
    ktao();ok = 1;
    while(ok){
        for(int i=1;i<=k;i++){
            cout << v[a[i] - 1] << " ";
        }
        cout << endl;
        sinh();
    }
    return 0;
}