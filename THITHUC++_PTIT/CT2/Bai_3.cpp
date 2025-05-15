#include<bits/stdc++.h>
using namespace std;

int n;
char a[1001][1001];
string sum[1001][1001];//luu lai tong lon nhat de den  dc o thu i,j

int main(){
    cin >> n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin >> a[i][j];
        }
    }

    if(a[1][1] == '1') sum[1][1] = "1";
    else sum[1][1] = "0";

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i == 1 && j == 1) continue;
            if(i==1){
                sum[i][j] = sum[i][j-1] + a[i][j];
            }
            else if(j==1) sum[i][j] = sum[i-1][j] + a[i][j];

            else sum[i][j] = max(sum[i-1][j],sum[i][j-1]) + a[i][j];
        }
    }

    string rs = sum[n][n];
    
    while(rs.size() > 1 && rs[0] == '0'){
        rs.erase(0,1);
    }
    string result = "";
    while(rs.size() % 4 != 0){
        rs = "0" + rs;
    }

    int l = rs.size();//cap nhat do dai moi neu can
    int times = l / 4;int st = 0;
    for(int i=0;i<times;i++){
        string tmp = "";
        for(int j=0;j<4;j++){
            tmp.push_back(rs[j+st]);
        }
        st+=4;
        int x = (tmp[0] - '0') * 8 + (tmp[1] - '0') * 4 + (tmp[2] - '0') * 2 + (tmp[3] - '0');
        if(x < 10) cout << x;
        else{
            cout << (char) (x + 55);
        }
    }
    
}