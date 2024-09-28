#include <bits/stdc++.h>
using namespace std;
#define ll long long
//nghich dao modun
/*
(A*B)%M = 1;B: nghich dao modun cua A duoi co so M
(5*2) % 3 = 1
viet B = A^-1 :dieu kien ton tai nghich dao modun khi gcd(A,M) = 1

// ung dung phep chia dong du
A/B % M = ((A%M)*(B^-1 % M)) % M
or viet = (A*B^-1) % M
*/
int x,y,g;
void ex_gcd(int a,int b){
    if(b==0){
        x = 1;
        y = 0;
        g = a;
    }
    else{
        ex_gcd(b,a%b);
        int tmp = x;
        x = y;
        y = tmp - a/b * y;
    }
}
//O(og(m(a,m)))
int modular_inverse(int a,int m){
    ex_gcd(a,m);
    return (x % m + m) % m;
}
int main(){
    int a,b,m;
    cin >> a >> b >> m;
    //tinh a*b % m
    cout << a*modular_inverse(b,m) % m << endl;

}