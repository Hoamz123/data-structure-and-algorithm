#include<bits/stdc++.h>
using namespace std;
int n,k,a[1001],b[1001];
int ok;
void sinh(){
    int i = k;
    while(i>=1 && a[i] == n-k+i){
        --i;
    }
    if(i==0) ok = false;
    else{
        a[i]++;
        for(int j=i+1;j<=n;j++){
            a[j] = a[j-1] + 1;
        }
    }
}
int main(){
    cin >> n;
    for(int i=1;i<=n;i++){
        cin >> b[i];
    }
    sort(b+1,b+n+1);
    for(int i=1;i<=n;i++){
        k = i;
        //khoi tao
        for(int j=1;j<=k;j++){
            a[j] = j;
        }
        ok = 1;
        while(ok){
            for(int i=1;i<=k;i++){
                cout << b[a[i]] << " ";
            }
            cout << endl;
            sinh();
        }
    }
}