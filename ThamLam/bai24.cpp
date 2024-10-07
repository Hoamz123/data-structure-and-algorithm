#include<bits/stdc++.h>
using namespace std;
#define ll long long
int mod = 1e9 + 7;
bool check(int a[],int n){
    for(int i=0;i<n-1;i++){
        if(a[i] > a[i+1]) return false;
    }
    return true;
}
int main(){
    int n;cin >> n;
    int a[n];
    for(int &x : a )cin >> x;
    if(n % 2 == 0) cout << "No" << endl;
    else{
        int i = 0;int j = n-1;
        while(i<j){
            if(a[i] >= a[j]){
                swap(a[i],a[j]);
            }
            ++i;
            --j;
        }
        if(check(a,n)) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}