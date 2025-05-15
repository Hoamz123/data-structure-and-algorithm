#include<bits/stdc++.h>
using namespace std;

int a[1001][1001];
int n;
int main(){

    cin >> n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin >> a[i][j];
        }
    }

    map<int,int> mp;

    for(int i=1;i<=n;i++){
        map<int, int> ma;
        for(int j=1;j<=n;j++){
            if(ma[a[i][j]] == 0){
                mp[a[i][j]]++;
                ma[a[i][j]] = 1;
            }
        }
    }

    set<int> s;

    for(auto it : mp){
        if(it.second == n){
            s.insert(it.first);
        }
    }

    if((int)s.size() != 0){
        for(int i : s) cout << i << " ";
    }
    else{
        cout << "NOT FOUND";
    }
    

}