// Giá trị xâu kí tự
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int k;string s;
void solve(){
    cin >> k >> s;
    int dd[257] = {0};
    for(char x : s) dd[int(x)]++;
    priority_queue<int> q;//luu tan xuat cua ki tu
    for(int i=0;i<257;i++){
        if(dd[i]){
            q.push(dd[i]);
        }
    }
    while(k-- && !q.empty()){
        int x = q.top();q.pop();
        if(x - 1 >= 1) q.push(x-1);
    }
    ll res = 0;
    while(!q.empty()){
        int x = q.top();
        res += pow(x,2);
        q.pop();
    }
    cout << res << endl;

}
int main(){
    int t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
/*
2
0
ABCC
6
1
ABCC
3
*/