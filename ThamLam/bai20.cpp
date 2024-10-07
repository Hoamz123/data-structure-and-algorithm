#include<bits/stdc++.h>
using namespace std;
//[Tham Lam]. Bài 22. Tích của 3 số
/*
Cho số nguyên dương N, nhiệm vụ của bạn là kiểm tra xem có thể viết N = a * b *
c hay không, trong đó a, b, c là 3 số nguyên dương lớn hơn hoặc bằng 2 ////khác
nhau.///
*/
bool check(int n){
    int cnt = 0;
    int mu = 0;
    for(int i=2;i<=sqrt(n);i++){
        if(n % i == 0){
            cnt++;
            while(n%i==0){
                mu++;
                n/=i;
            }
        }
    }
    if(n!=1){
        cnt++;
        mu+=1;
    }
    if(cnt == 1 && mu >= 6) return true;
    else if(cnt == 2 && mu >= 4) return true;
    else if(cnt >= 3) return true;
    return false;
}

int main(){
    int n;cin >> n;
    if(check(n)) cout << "Yes";
    else cout << "No";
    return 0;
}