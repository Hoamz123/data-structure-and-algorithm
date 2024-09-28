#include <bits/stdc++.h>
using namespace std;
#define ll long long
// euclid mo rong
/*
ax + by = gcd(a,b);
vd 10x + 6y = 2   
*/
// ucln
int gcd(int a,int b){
    if(b==0) return a;
    return gcd(b,a%b);
}
int x,y,g;
void ex_gcd(int a,int b){
    if(b==0){
        x = 1;
        y = 0;
        g = a;
    } 
    else{
        ex_gcd(b, a % b); // chay den khi b==0 thi dung ->xuong dong 17
        int tmp = x;      // x1
        x = y;            // x = y1
        y = tmp - a / b * y;
    }
}
int main(){
    ex_gcd(16,10);
    cout << x << " " << y << " " <<g;
} 