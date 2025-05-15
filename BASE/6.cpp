#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin >> n;
    int ok = 0;
    for(int i=0;i<n;i++){
        int x;cin >> x;
        if(x != 28){
            cout << x << " ";
            ok = 1;
        }
    }
    if(!ok) cout << "EMPTY";
}