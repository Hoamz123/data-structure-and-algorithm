#include<bits/stdc++.h>
using namespace std;
int a[1001],used[1001];
int n;
void Try(int i){
    for(int j=1;j<=n;j++){
        if(used[j] == 0){
            a[i] = j;
            used[j] = 1;
            if(i==n){
                for(int k=1;k<=n;k++){
                    cout << a[k] << " ";
                }
                cout << endl;
            }
            else if(i<n){
                Try(i+1);
            }
            used[j] = 0;
        }
    }
}
int main(){
    cin >> n;
    memset(used,0,sizeof(used));
    Try(1);
}