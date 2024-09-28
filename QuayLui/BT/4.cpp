#include <bits/stdc++.h>
using namespace std;
int k,m,n;
char a[100][100];
int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
string s = "";
set<string> se;
int dd[100][100] = {0};
vector<string> v;
void input(){
    cin >> k >> m >> n;
    for(int i=0;i<k;i++){
        string s;cin >> s;
        se.insert(s);
    }
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            cin >> a[i][j];
        }
    }
}

void Try(int i,int j){
    s += a[i][j];
    //cout << s << endl;
    if(se.find(s) != se.end()){
        v.push_back(s);
    }
    for(int k=0;k<8;k++){
        int i1 = i + dx[k];
        int j1 = j + dy[k];
        if(i1 >= 1 && i1 <= m &&  j1 >= 1 && j1 <= n && dd[i1][j1] == 0){
            dd[i1][j1] = 1;//danh dau o nay da duoc duyet qua
            Try(i1,j1);
            dd[i1][j1] = 0;//backtrack
        }
    }
    s.pop_back();
}
int main(){
    input();
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            Try(i,j);
        }
    }
    cout << endl;
    for(string s : v) cout << s <<" ";
    return 0;
}
/*
input:
4 3 3
GEEKS FOR QUIZ GO
G I Z
U E K
Q S E

*/
