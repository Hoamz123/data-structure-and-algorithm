#include<bits/stdc++.h>
using namespace std;

int a[1001][1001];
int n;
int main(){
    cin >> n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin >> a[i][j];
        }
    }

    vector<vector<int>> v;
    v.push_back({0});

    for(int i=1;i<=n;i++){
        vector<int> tmp;
        tmp.push_back(-1000000);
        for(int j=1;j<=n;j++){
            tmp.push_back(a[j][i]);
        }
        sort(tmp.begin(),tmp.end());
        v.push_back(tmp);
    }

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            a[i][j] = v[i][j];
        }
    }

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout << a[j][i] << " ";
        }
        cout << endl;
    }
    //ac nhung hoi doi ngu vleu
}