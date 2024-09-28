#include<bits/stdc++.h>
using namespace std;
#define ll long long
//UCLN ,BCNN 
ll gcd(int a,int b){
    if(b==0){
        return a;
    }
    return gcd(b,a%b);
}
ll uc(int a,int b){
    while(b!=0){
        int tmp = b;
        b = a % b;
        a = tmp;
    }
    return a;
}
ll lcm(int a,int b){
    return a/gcd(a,b)*b;
}
int main(){
    //int a,b;cin >> a >> b;
    //cout << gcd(a,b) <<" " << uc(a,b) << endl;
    //cout << lcm(a,b) <<endl;
    int n;cin >> n;
    int a[n];
    for(int &x : a){
        cin >> x;
    }
    int res = a[0];
    for(int i=1;i<n;i++){
        res = gcd(res,a[i]);
    }
    int rs = 1;
    for(int i=0;i<n;i++){
        rs = lcm(rs,a[i]);
    }
    cout << res << " " << rs << endl;
    return 0;
}