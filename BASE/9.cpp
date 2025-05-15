#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=1;i<n;i++){
        cout << a[i] + a[i-1] << " ";
    }
    cout << endl;
    for(int i = 2;i<n;i++){
        cout << a[i] + a[i-1]+ a[i-2] << " ";
    }
    cout << endl;
    for(int i=3;i<n;i++){
        cout << a[i] + a[i-1] + a[i-2]+ a[i-3] << " ";
    }
}