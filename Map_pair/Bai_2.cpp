#include<bits/stdc++.h>
using namespace std;

int main(){
    /*set<pair<int,int>> s;
    s.insert({2,3});
    s.insert({2,3});//trung lap (loai)
    s.insert({1,3});
    s.insert({3,4});

    for(auto it : s){
        //so sanh theo thu tu first -> key
        cout << it.first << " " << it.second << endl;
    }*/
    
    //nhap vao n phan tu sort tang dan va in ra mang ung voi chi so ban dau cua cac phan tu
    int n;cin >> n;
    int a[n];
    pair<int,int> p[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
        p[i] = {a[i],i};
    }
    sort(p,p+n);
    //chi so cua cac phan tu luc chua sort
    for(auto it : p){
        cout << it.first << " " << it.second << endl;
    }

}