#include<bits/stdc++.h>
using namespace std;
bool cmp(int a,int b){
    return a < b;
}
int main(){
    vector<int> v;
    for(int i=0;i<10;i++){
        int x;cin >> x;
        v.push_back(x);
    }
    sort(v.begin(),v.end(),cmp);
    for(int x : v) cout << x << " ";
}