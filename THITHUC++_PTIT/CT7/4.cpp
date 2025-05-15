#include<bits/stdc++.h>
using namespace std;
int a[1000001];
int n;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    unordered_map<int,int> mp;
    int prex = 0;
    int max_l = 0;
    int id = -1;//chi so bat dau cua day con
    for(int i=0;i<n;i++){
        prex += a[i];

        if(prex == 0){
            //neu vao day chung to day con bat dau tu vi tri dau tien
            max_l = i + 1;
            id = 0;
        }

        if(mp.find(prex) != mp.end()){
            int len = i - mp[prex];
            if(len > max_l){
                max_l = len;
                id = mp[prex] + 1;
            }
        }
        else{
            mp[prex] = i;
        }
    }

    if(id == -1){
        cout << "NOT FOUND";
    }
    else{
        for(int i=0;i<max_l;i++){
            cout << a[id + i] << " ";
        }
    }
}
/*
8
1 3 1 -4 2 -2 1 5

*/