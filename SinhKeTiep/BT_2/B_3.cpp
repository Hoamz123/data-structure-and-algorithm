#include<bits/stdc++.h>
using namespace std;
int n,a[1001],ok;
void ktao(){
    for(int i=1;i<=n;i++){
        a[i] = 0;
    }
}
void sinh(){
    int i = n;
    while(i>=1 && a[i] == 1){
        a[i] = 0;
        --i;
    }
    if(i==0) ok = 0;
    else a[i] = 1;
}
bool check(){
    for(int i=1;i<n;i++){
        if(a[i] == a[i+1]){
            return false;
        }
    }
    return true;
}
int main(){
    int t;cin >> t;
    while(t--){
        cin >> n;
        ktao();
        ok = 1;
        while(ok){
            if(check()){
                for(int i=1;i<=n;i++){
                    cout << a[i];
                }
                cout << " ";
            }
            sinh();
        }
        cout << endl;
    }
    return 0;
}