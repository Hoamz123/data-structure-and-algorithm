#include<bits/stdc++.h>
using namespace std;
int n,k;
vector<vector<int>> v;
vector<int> tmp;
void Try(int idx,int sum){
    for(int j=idx;j<=9;j++){
        tmp.push_back(j);
        sum += j;
        if(sum == n && (int)tmp.size() == k){
            v.push_back(tmp);
        }
        else if(sum < n && (int)tmp.size() < k){
            Try(j+1,sum);
        }
        //back track
        tmp.pop_back();//lay phan tu cuoi ra
        sum -= j;
    }
}
int main(){
    ios::sync_with_stdio(false); // Tắt đồng bộ hóa
    cin.tie(nullptr);            // Tắt liên kết giữa cin và cout để tăng tốc
    cin >> n >> k;
    Try(1,0);
    sort(v.begin(),v.end());
    if(v.empty()) cout << "Not Found" << endl;
    else{
        for(vector<int> x : v){
            for(int i : x){
                cout << i;
                if(i!= *x.rbegin()){
                    cout << " + ";
                }
            }
            cout << endl;
        }
    }
    return 0;
}
/*
38 7
out:
1 + 2 + 5 + 6 + 7 + 8 + 9
1 + 3 + 4 + 6 + 7 + 8 + 9
2 + 3 + 4 + 5 + 7 + 8 + 9
*/