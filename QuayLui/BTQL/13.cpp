#include <bits/stdc++.h>
using namespace std;
int n;
int x[1001],dx[1001] = {0};
void Try(int i){
    for(int j=1;j<=n;j++){
        if(dx[j] == 0 && abs(j - x[i-1]) != 1){
            dx[j] = 1;
            x[i] = j;
            if(i == n){
                for(int k=1;k<=n;k++){
                    cout << x[k];
                }
                cout << endl;
            }
            else{
                Try(i+1);
            }
            dx[j] = 0;
        }
    }
}
int main(){
    cin >> n;
    x[0] = -1;//tranh TH j = 1 va x[0] = 0
    Try(1);
}