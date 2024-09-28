#include<bits/stdc++.h>
using namespace std;
int n,ok,a[1001];
void ktao(){
    for(int i=1;i<=n;i++){
        a[i] = i;
    }
}
void sinh(){
    int i=n-1;
    while(i>=1 && a[i] > a[i+1]){
        --i;
    }
    if(i==0) ok = 0;
    else{
        int j= n;
        while(a[i] > a[j]){
            --j;
        }
        swap(a[i],a[j]);
        reverse(a+i+1,a+n+1);
    }
}
bool check(){
    for(int i=1;i<n;i++){
        if(abs(a[i] - a[i+1]) == 1){
            return false;
        }
    }
    return true;
}
int main(){
    int t;cin >> t;
    while(t--){
        cin >> n;
        ktao();ok = 1;
        while(ok){
            if(check()){
                for(int i=1;i<=n;i++){
                    cout << a[i];
                }
                cout << endl;
            }
            sinh();
        }
        cout << endl;
    }
}
/*
2
4
2413 3142
5
13524 14253 24135 24153 25314 31425 31524 35142 35241 41352 42513 42531 52413 53142
*/