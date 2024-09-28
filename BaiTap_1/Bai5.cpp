#include <bits/stdc++.h>
using namespace std;
#define ll long long
//cho N in ra uoc nguyen to nho nhat cua cac so trong tu 1->N
int p[1000001] = {0};
void sang(){
    for(int i=0;i<1000001;i++){
        p[i] = i;
    }
    for(int i=2;i<=1000;i++){
        if(p[i] == i){
            // i la snt
            for(int j = i*i;j<1000001;j+=i){
                if(p[j] == j){
                    //chua duoc gan
                    // cap nhat 1 lan thi se la nho nhat
                    p[j] = i;
                }
            }
        }
    }
}
int main(){
    int t;cin >> t;
    sang();
    while(t--){
        int n;cin >> n;
        for(int i=1;i<=n;i++){
            cout << p[i] << " ";//O(1)
        }
    }
}