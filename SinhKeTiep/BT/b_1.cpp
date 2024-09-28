#include<bits/stdc++.h>
using namespace std;
//input: cho xau nhi phan hay dua ra xau nhi phan tiep theo
// inp: 010101                 out :010110
int main(){
    int t;cin >> t;
    while(t--){
        string s;cin >> s;
        int n = s.length();
        int a[n+1];
        for(int i=0;i<(int)s.length();i++){
            a[i+1] = s[i] - '0';
        }
        int j = n;
        while(j>=1 && a[j] == 1){
            a[j] = 0;
            --j;
        }
        if(j!=0) a[j] = 1;
        //out put
        for(int i=1;i<=n;i++){
            cout << a[i];
        }
        cout << endl;
    }
}