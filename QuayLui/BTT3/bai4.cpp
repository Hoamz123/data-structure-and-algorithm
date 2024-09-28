#include<bits/stdc++.h>
using namespace std;
int n,k;
int prime[1000001];
vector<int> a;
void sieve(){
    //snag cac so nguyen to
    for(int i=0;i<1000001;i++){
        prime[i] = 1;
        prime[0] = prime[1] = 0;
    }
    for(int i=2;i<=1000;i++){
        for(int j=i*i;j<1000001;j+=i){
            prime[j] = 0;
        }
    }
}
void ktao(){
    sieve();
    for(int i=2;i<=500;i++){
        if(prime[i]){
            //i la snt
            a.push_back(i);
        }
    }
}
vector<vector<int>> v;
vector<int> tmp;
void Try(int idx,int sum){
    for(int j=idx;j<(int)a.size();j++){
        tmp.push_back(a[j]);
        sum += a[j];
        if(sum == n && (int)tmp.size() == k){
            v.push_back(tmp);
        }
        else if(sum < n && (int)tmp.size() < k){
            Try(j+1,sum);
        }
        tmp.pop_back();
        sum -= a[j];
    }
}
int main(){
    ios :: sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> k;
    ktao();
    Try(0,0);
    sort(v.begin(),v.end());
    if(v.empty()) cout << "NOT FOUND" << endl;
    else{
        for(vector<int> x : v){
            for(int i : x){
                cout << i;
                if(i != *x.rbegin()){
                    cout << " + ";
                }
            }
            cout << endl;
        }
    }
    return 0;
}