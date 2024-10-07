//nham chu so
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll a,b;
    cin >> a >> b;
    ll resultMAX = 0;
    ll resultMIN = 0;
     //TH nham -> tong max
    {
        ll u = a,v = b;
        string x = to_string(u);
        string y = to_string(v);
        for(int i=0;i<(int)x.size();i++){
            if(x[i] == '5') x[i] = '6';
        }
        for(int i=0;i<(int)y.size();i++){
            if(y[i] == '5') y[i] = '6';
        }
        resultMAX = stoll(x) + stoll(y);
    }
    //TH nham -> tong min
    {
        string x = to_string(a);
        string y = to_string(b);
        for(int i=0;i<(int)x.size();i++){
            if(x[i] == '6') x[i] = '5';
        }
        for(int i=0;i<(int)y.size();i++){
            if(y[i] == '6') y[i] = '5';
        }
        resultMIN = stoll(x) + stoll(y);
    }
    cout << resultMAX << " " << resultMIN << endl;
}