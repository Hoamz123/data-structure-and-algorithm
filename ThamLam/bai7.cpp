// Job Scheduling
#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int>> v;int n;
bool cmd(pair<int,int> a,pair<int,int> b){
    return a.second <= b.second;
}
int main(){
    cin >> n;
    for(int i=0;i<n;i++){
        int x,y;cin >> x >> y;
        v.push_back({x,y});
    }
    sort(v.begin(),v.end(),cmd);
    int cnt = 1;
    int rmb = v[0].second;//thanh phan thu 2 cua pair dau tien
    for(int i = 1;i<(int)v.size();i++){
        if(v[i].first > rmb){
            cnt++;
            rmb = v[i].second;
        }
    }
    cout << cnt << endl;
}
/*
16
1 5
2 7
3 7
5 7
6 7
10 12
10 13
1 3
7 8
9 14
5 6
9 10
3 5
8 13
1 6
3 6
4
*/