#include<bits/stdc++.h>
using namespace std;
//[DP].Bài 2. Dãy con tăng dài nhất(LIS)
int main(){
    ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    vector<int> v;
    for(int i=0;i<n;i++){
        auto it = lower_bound(v.begin(),v.end(),a[i]);//tra ve iterator cua phan tu nho nhat >= a[i]
        if(it == v.end()){
            v.push_back(a[i]);
        }
        else{
            *it = a[i];
        }
    }
    cout << v.size() << endl;
    for(int x : v) cout << x << " ";
}