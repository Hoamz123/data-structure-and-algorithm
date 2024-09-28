#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n,a[1001],ok;

int main(){
    cin >> n;//N hoc sinh
    vector<string> v;
    for(int i=1;i<=n;i++){
        string s;cin >> s;
        v.push_back(s);
    }
    sort(v.begin(),v.end());
    do{
        for(int i=0;i<n;i++){
            cout << v[i] << " ";
        }
        cout << endl;
    }while(next_permutation(v.begin(),v.end()));
}
/*
input:
3
Nam Lan Phi
output:
Lan Nam Phi
Lan Phi Nam
Nam Lan Phi
Nam Phi Lan
Phi Lan Nam
Phi Nam Lan
*/