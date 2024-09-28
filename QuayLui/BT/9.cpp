#include<bits/stdc++.h>
using namespace std;
int n,a[101];vector<int> res;
vector<vector<int>> v;
void ktao(){
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
}
void Try(int idx,int sum){
    for(int j=idx;j<n;j++){
        sum += a[j];
        res.push_back(a[j]);
        if(sum % 2 == 1){
            v.push_back(res);
        }
        Try(j+1,sum);
        res.pop_back();
        sum -= a[j];
    }
}
int main(){
    ktao();
    Try(0,0);
    if(v.size() == 0) cout << "Not found" << endl;
    else{
        sort(v.begin(),v.end());
        for(vector<int> x : v){
            for(int i: x) cout << i << " ";
            cout << endl;
        }
    }
}