#include<bits/stdc++.h>
using namespace std;
// Bai 15 : (Tham lam) So Nho Nhat
string so_Be_Nhat(int sum,int n){
    string s = string(n,'0');
    for(int i = n-1;i>=0;i--){
        if(sum > 9){
            s[i] = '9';
            sum -=9;
        }
        else{
            if(i != 0){
                s[0] = '1';
                s[i] = (sum - 1) + '0';
                return s;
            }
            else{
                // TH i == 0
                s[i] = sum + '0';
                return s;
            }
        }
    }
    return s;
    
}
string so_Lon_Nhat(int sum,int n){
    string s = string(n,'0');
    for(int i=0;i<n;i++){
        if(sum > 9){
            s[i] = 9 + '0';
            sum -=9;
        }
        else{
            s[i] = sum + '0';
            sum = 0;
        }
    }
    return s;
}
int main(){
    int sum,n;
    cin >> sum >> n;
    if(n*9 < sum || (sum == 0 && n!=1)) cout << -1;
    else{
        cout << so_Be_Nhat(sum,n) << endl;
        cout << so_Lon_Nhat(sum,n);
    }
}
// Bai so lon nhat
