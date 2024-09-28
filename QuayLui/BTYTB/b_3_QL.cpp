#include<bits/stdc++.h>
using namespace std;
string s;
int a[1001],dx[1001];int n;
void ktao(){
    cin >> s;n = s.size();
    sort(s.begin(),s.end());
    memset(dx,0,sizeof(dx));
}
void Try(int i){
    for(int j = 0;j<n;j++){
        if(dx[j] == 0){//chua xuat hien
            a[i] = j;
            dx[j] = 1;//danh dau la da xuat hien

            if(i==n){
                for(int k=1;k<=n;k++){
                    cout << s[a[k]];
                }
                cout << " ";
            }
            else{
                Try(i+1);
            }
            dx[j] = 0;//back track
        }
    }
}
int main(){
    ktao();
    Try(1);
}