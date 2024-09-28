#include<bits/stdc++.h>
using namespace std;
//liet ke cac xau nhi phan thuan nghich
int n,a[1001];
int ok;
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
    if(i==0) ok = false;
    else a[i] = 1;
}
bool check(){
    for(int i=1;i<=n;i++){
        if(a[i] != a[n + 1 - i]){
            return false;
        }
    }
    return true;
}
int main(){
    int t;cin >> t;
    while(t--){
        cin >> n;
        ok = 1;
        ktao();
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
}