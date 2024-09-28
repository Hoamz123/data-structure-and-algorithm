#include<bits/stdc++.h>
using namespace std;
#define fi first
#define se second
int main(){
    //khai bao pair
    //pair<datatype1,datatype2> name;
    /*pair<string,int> p("dinh van hoa",100);
    cout << p.first << " " << p.second;*/

    /*luu mang pair
    pair<int,int> p[100];//
    int n;cin >> n;//gs luu n diem
    for(int i=0;i<n;i++){
        cin >> p[i].fi >> p[i].se;
    }
    for(int i=0;i<n;i++){
        cout << p[i].fi << " " << p[i].se << endl;
    }*/

    vector<pair<int,int>> v;//so luong diem trong toa do
    int n;cin >>n;
    for(int i=0;i<n;i++){
        int x,y;cin >> x >> y;
        v.push_back({x,y});
    }
    /*for(pair<int,int> p:v){
        cout << p.fi << " " << p.se << endl;
    }*/
    /*for(int i=0;i<n;i++){
        cout << v[i].fi << " " << v[i].se << endl; 
    }*/
    //dung auto
    for(auto it : v){
        cout << it.first << " " << it.second << endl;
    }
}