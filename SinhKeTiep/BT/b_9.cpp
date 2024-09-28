#include<bits/stdc++.h>
using namespace std;
int n,k,a[1001];
set<int> s;
void sinh(){
    int i = k;
    while(i>=1 && a[i] == n-k+i){
        --i;
    }
    if(i==0){
        //cau hinh cuoi icung
        cout << k << endl;
    }
    else{
        a[i]++;
        for(int j=i+1;j<=k;j++){
            a[j] = a[j-1] + 1;
        }
        int res = 0;
        for(int i=1;i<=k;i++){
            if(s.count(a[i]) == 0){
                //neu a[i] khong tim thay trong set
                res++;
            }
        }
        cout << res << endl;
    }
}
int main(){
    int t;cin >> t;
    while(t--){
        cin >> n >> k;
        for(int i=1;i<=k;i++){
            cin >> a[i];
            s.insert(a[i]);
        }
        sinh();
        s.clear();
    }
}
/*
3
5 3
1 3 5
5 3
1 4 5
6 4
3 4 5 6
output:
1
2
4

*/