// Nối dây 1
#include<bits/stdc++.h>
using namespace std;
int n;
int main(){
    cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    priority_queue<int,vector<int>,greater<int>> q;
    for(int x : a){
        q.push(x);
    }
    int M = 0;
    while((int)q.size() > 1){
        int x = q.top();q.pop();
        int y = q.top();q.pop();
        int cost = x + y;
        M += cost;
        q.push(cost);
    }
    cout << M;
}