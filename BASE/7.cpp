#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin >> n;
    map<int,int> mp;
    for(int i=0;i<n;i++){
        int x;cin >> x;
        if(x < 0) x *= -1;
        while(x != 0){
            int y = x % 10;
            mp[y]++;
            x/=10;
        }
    }
    for(auto it : mp){
        cout << it.first << " " << it.second << endl;
    }
}