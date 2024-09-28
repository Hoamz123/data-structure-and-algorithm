#include <bits/stdc++.h>
using namespace std;
#define ll long long
//cho 4 so nguyen duon x,y,z,n tim so nho nhat co n chu so chia het cho ca x,y,z
//so chia het cho x,y,z thi chia het cho bcnn cua x,y,z;
ll lcm(ll a,ll b){
    return a / __gcd(a,b) * b;//tranh tran so
}
int main(){
    int x,y,z,n;cin >> x >> y >> z >> n;
    ll bc = lcm(lcm(x,y),z);
    ll rs = (((ll)pow(10,n-1)) + bc - 1)/bc * bc;
    if(rs < (ll)pow(10,n)) cout << rs << endl;
    else cout << -1 << endl; 
}