#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    vector<int> c;
    vector<int> l;
    for(int i=0;i<n;i++){
        int cnt = 1;
        if(a[i] % 2 == 0){
            while(i < n && a[i] == a[i+1]){
                cnt++;
                ++i;
            }
            c.push_back(cnt);
        }
        if(a[i] % 2 != 0){
            while(i < n && a[i] == a[i+1]){
                cnt++;
                ++i;
            }
            l.push_back(cnt);
        }
    }
    for(int i : l) cout << i << " ";
    cout << endl;
    for(int i : c) cout << i << " ";
}