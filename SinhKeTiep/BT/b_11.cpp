#include<bits/stdc++.h>
using namespace std;
int n,k,a[1001];
int main(){
    int t;cin >> t;
    while(t--){
        cin >> n >> k;int mt[n+1][n+1];
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                cin >> mt[i][j];
            }
        }
        for(int i=1;i<=n;i++){
            a[i] = i;
        }
        vector<string> v;
        do{
            int sum = 0;
            for(int i=1;i<=n;i++){
                sum += mt[i][a[i]];
            }
            if(sum == k){
                string s = "";
                for(int i=1;i<=n;i++){
                    s += a[i] + '0';
                    s+= " ";
                }
                v.push_back(s);
            }
        }while(next_permutation(a+1,a+n+1));
        cout << v.size() << endl;
        for(string x : v){
            cout << x << endl;
        }
    }
}
//Dinh Van Hoa