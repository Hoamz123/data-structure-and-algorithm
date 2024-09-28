#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;cin >> t;
    while(t--){
        int l,r;cin >> l >> r;int cnt = 0;//luu so luong so cihnh phuong trong doan
        int c1 = sqrt(l);int c2 = sqrt(r);
        if(c1 * c1 != l) c1++;
        for(int i=c1;i<=c2;i++){
            cout << i*i << " ";
            cnt++;
        }
        cout << endl << cnt << endl;
    }
}