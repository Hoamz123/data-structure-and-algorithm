#include<bits/stdc++.h>
using namespace std;
int n;
int main(){
    int a[10] = {1,2,5,10,20,50,100,200,500,1000};
    cin >> n;
    int cnt = 0;//luu so luong to tien
    for(int i=9;i>=0;i--){
        cnt += n / a[i];
        n = n % a[i];
        if(n==0) break;
    }
    cout << cnt << endl;
}