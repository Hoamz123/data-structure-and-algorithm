#include<bits/stdc++.h>
using namespace std;
// https://drive.google.com/drive/folders/1NjNPIOHNx-bKKYldtTDx_d36kVcshz4r
int n,k,s;
int cnt = 0;vector<int> v;
void Try(int idx,int sum){
    for(int j=idx;j<=n;j++){
        sum += j;
        v.push_back(j);
        if(sum == s && (int)v.size() == k){
            cnt++;
        }
        else if(sum < s && (int)v.size() < k){
            Try(j+1,sum);
        }
        //back track
        sum -= j;
        v.pop_back();
    }
}
int main(){
    cin >> n >> k >> s;
    Try(1,0);
    cout << cnt << endl;
}
/*
16 8 91
28
*/