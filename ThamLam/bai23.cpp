#include<bits/stdc++.h>
using namespace std;
//bai toan mua sach biet cu mua 3 quyen thi quyen it tien nhat se dc mien phi -> tong tien it nhat can tra 
int main(){
    int n;cin >> n;
    int a[n];int sum = 0;//tong tien phai tra
    for(int &x : a){
        cin >> x;
    }
    sort(a,a+n,greater<int> ());
    for(int i=0;i<n;i++){
        if((i+1) % 3 == 0){
            continue;
        }
        else sum += a[i];
    }
    cout << sum << endl;
}
/*
8
1 3 5 6 8 9 10 12
40
*/