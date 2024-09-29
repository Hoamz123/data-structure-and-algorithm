#include<bits/stdc++.h>
using namespace std;
int n,a[1001],x[1001];
vector<string> v;
void Try(int i,int idx){
    for(int j = idx;j<=n;j++){
        if(a[j] > x[i-1]){
            x[i] = a[j];
            if(i >= 2){
                string tmp = "";
                for(int k=1;k<=i;k++){
                    tmp += x[k] + '0';
                }
                v.push_back(tmp);
            }
            Try(i+1,j+1);
        }
    }
}
int main(){
    cin >> n;
    for(int i=1;i<=n;i++){
        cin >> a[i];
    }
    x[0] = 0;
    Try(1,1);
    sort(v.begin(),v.end());
    for(string x : v){
        for(char i : x){
            cout << i << " ";
        }
        cout << endl;
    }
}