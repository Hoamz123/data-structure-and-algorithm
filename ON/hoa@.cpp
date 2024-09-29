#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n,l;
int main(){
    cin >> n >> l;
    vector<int> v(l+1,0);
    int maxDK = -1000;
    int maxTT = -1000;
    while(n--){
        int a,b;
        cin >> a >> b;
        maxDK = max(maxDK,b-a+1);
        int cnt = 0;
        for(int i=a;i<=b;i++){
            if(v[i] == 0){
                cnt++;//chiem duoc mot cho
                v[i] = 1;
            }
        }
        maxTT = max(maxTT,cnt);
    }
    cout << maxDK << " " << maxTT << endl;
}