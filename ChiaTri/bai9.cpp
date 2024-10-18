#include<bits/stdc++.h>
using namespace std;
#define ll long long
//Bai tron hai mang
int a[10001],b[10001],n,m,k;
void mer(){
    int i=0,j=0,t=0;
    int M[m+n];
    while(i < n && j < m){
        if(a[i] < b[j]){
            M[t++] = a[i++];
        }
        else M[t++] = b[j++];
    }
    while(i < n){
        M[t++] = a[i++];
    }
    while(j < m){
        M[t++] = a[j++];
    }
    cout << M[k - 1] << endl;
}
int main(){
    cin >> n >> m >> k;
    for(int i=0;i<n;i++) cin >> a[i];
    for(int i=0;i<m;i++) cin >> b[i];
    mer();
}