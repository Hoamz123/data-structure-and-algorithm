#include<bits/stdc++.h>
using namespace std;
#define fi first
#define se second
//so sanh theo key giam dan,neu key giong nhau thi sort theo value giam dan
bool cmp(pair<int,int> a,pair<int,int> b){
    if(a.fi != b.fi){
        return a.fi > b.fi;
    }
    return a.se > b.se;
}
int main(){
    int n;cin >> n;
    pair<int,int> p[n];
    for(int i=0;i<n;i++){
        int x,y;cin >> x >> y;
        p[i].fi = x;
        p[i].se = y;
    }
    sort(p,p+n,cmp);//mac dinh so sanh thoe key -> so sanh theo value
    for(auto it : p){
        cout << it.fi << " " << it .se << endl;
    }
}