#include<bits/stdc++.h>
using namespace std;
vector<int> twosum(int a[],int n,int target){
    map<int,int> mp;
    for(int i=0;i<n;i++){
        int pb = target - a[i];
        if(mp.find(pb) != mp.end()){
            //neu phan bu da co trong map
            return {mp[pb],i};
        }
        else mp[a[i]] = i;
    }
    //ko co cap nao thoa man
    return {-1,-1};
}
int main(){
    //two sum
    //tim cap i,j saocho a[i] + a[j] = k;
    int n,k;cin >> n >> k;
    int a[n];
    map<int,int> mp;
    for(int &x : a) cin >> x;
    vector<int> v = twosum(a,n,k);
    for(int x : v){
        cout << x << " ";
    }
    
}