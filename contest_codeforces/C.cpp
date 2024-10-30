#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin >> n;
    //O(nlog(n))
    int a[n+1];
    vector<int> v;
    for(int i=1;i<=n;i++) cin >> a[i];
    for(int i=1;i<=n;i++){
        auto it = lower_bound(v.begin(),v.end(),a[i]);//check xem trong v co phan tu nao nho nhat >= a[i] hay ko
        if(it == v.end()) v.push_back(a[i]);
        else *it = a[i];
    }
    cout << v.size();
}