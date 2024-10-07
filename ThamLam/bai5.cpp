//xap xep tham lam
#include<bits/stdc++.h>
using namespace std;
int n;
bool check(int a[]){
    for(int i=0;i<n-1;i++){
        if(a[i] > a[i+1]) return false;
    }
    return true;
}
int main(){
    int t;cin >> t;
    while(t--){
        cin >> n;
        int a[n];
        for(int i=0;i<n;i++) cin >> a[i];
        int i = 0,j = n-1;
        while(i<j){
            if(a[i] > a[j]){
                swap(a[i],a[j]);
            }
            ++i;
            --j;
        }
        if(check(a)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
/*
2
5
1 3 8 7 3
5
1 4 3 2 5

*/