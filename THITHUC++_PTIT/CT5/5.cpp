#include<bits/stdc++.h>
using namespace std;
#define ll long long
int a[1001][1001];
int p[1001][1001];
int n,m;

int dx[4] = {-1,1,0,0};
int dy[4] = {0,0,-1,1};

ll result;
void Try(int i,int j){
    a[i][j] = 0;// danh dau da di qua
    result += p[i][j];

    for(int k=0;k<4;k++){
        int i1 = i + dx[k];
        int j1 = j + dy[k];

        if(i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= m && a[i1][j1]){
            Try(i1,j1);
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n >> m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin >> a[i][j];
        }
    }


    for(int i=1;i<=n;i++){
        a[i][0] = 0;
        a[i][m+1] = 0;
    }

    for(int i=1;i<=m;i++){
        a[0][i] = 0;
        a[n+1][i] = 0;
    }

    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(!a[i-1][j]) p[i][j]+=1;
            if(!a[i+1][j]) p[i][j]+=1;
            if(!a[i][j-1]) p[i][j]+=1;
            if(!a[i][j+1]) p[i][j]+=1;
        }
    }

    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            result = 0;
            if(a[i][j]){

                Try(i,j);
                cout << result << " ";
            }
        }
    }

}
