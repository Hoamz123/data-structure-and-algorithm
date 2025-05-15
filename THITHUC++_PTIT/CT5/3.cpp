#include<bits/stdc++.h>
using namespace std;
#define ll long long
int a[1000001];int n,d;


int getID(int a[],int n){
    for(int i=1;i<n;i++){
        if(a[i] >= a[i+1]){
            return i;
        }
    }
    return -1;
}

int main(){
    ios_base::sync_with_stdio(0);cout.tie(0);cin.tie(0);

    cin >> n >> d;
    for(int i=1;i<=n;i++) cin >> a[i];


    int id = getID(a,n);
    if(id == -1){
        cout << 0;
        return 0;
    }
    ll cnt = 0;

    for(int i=id;i<n;i++){
        while(a[i] >= a[i+1]){
            a[i+1] += d;
            cnt++;
        }
    }

    cout << cnt;
//accept
}