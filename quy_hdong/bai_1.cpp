//bai toan day con tang dai nhat
#include<bits/stdc++.h>
using namespace std;
int main(){
    // tim ra do dai cua day con tang dai nhat o(n2)
    int n;cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    vector<int> L(n,1);
    //L[i] : do dai day con tang dai nhat kt o chi so i
    //L[i] = max(L[i],L[j] + 1)    dk: a[i] > a[j]
    for(int i=0;i<n;i++){
        //L[i] : thong qua L[j] da biet trc
        //duyet qua tung phan tu dung trc chi so i
        for(int j=0;j<i;j++){
            if(a[i] > a[j]){
                //so sau > so trc
                L[i] = max(L[i],L[j] + 1);
            }
        }
    }
    int size = *max_element(L.begin(),L.end());
    cout << size << endl;
}