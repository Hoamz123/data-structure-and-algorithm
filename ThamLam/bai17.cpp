//Bai xe taxi
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    sort(a,a+n);
    vector<int> v;
    int cnt = 0;
    int size = 4;
    for(int i=0;i<n;i++){
        if(a[i] <= size){
            v.push_back(a[i]);
            size -= a[i];
        }
        else{
            v.clear();//sang xe moi
            size = 4;//
            cnt++;
            v.push_back(a[i]);//nhom nay nay phai cho vao xe moi
            size -= a[i];
        }
    }
    if(!v.empty()){
        cnt++;
    }
    cout << cnt;
}