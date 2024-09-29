#include<bits/stdc++.h>
using namespace std;
int n,a[101],s,ok;
void ktao(){
    cin >> n;
    for(int i=1;i<=n;i++){
        cin >> a[i];
        s += a[i];
    }
    ok = 0;
}
void Try(int idx,int sum){
    for(int j=idx;j<=n;j++){
        sum += a[j];
        if(sum == s){
            ok = 1;
            return;
        }
        else if(sum < s){
            Try(j+1,sum);
        }
        sum -= a[j];
    }
}
int main(){
    ktao();
    if(s % 2 == 1){
        cout << 0;
    }
    else{
        Try(1,0);
        cout << ok << endl;
    }
}