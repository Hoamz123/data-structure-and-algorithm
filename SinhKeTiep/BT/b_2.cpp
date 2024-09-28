#include<bits/stdc++.h>
using namespace std;
/*
cho hai số N va K va tập con có K phần tử X[] = {X1,X2,...Xk} của 1..->N
Nhiệm vụ : hãy đưa ra tập con tiếp theoo của X
vd:N = 5,K=3 X[] = {2,3,4}; -> tập con tiếp theo là X[] = {2,3,5};

inp :
T
N K
x1 x2 x3 ... xk
outp:
x1 x2 x3 ... xk
*/
int n,k,a[1000];
void sinh(){
    int i = k;
    while(i>=1 && a[i] == n-k+i){
        --i;
    }
    if(i==0){
        for(int i=1;i<=k;i++){
            a[i] = i;
        }
    }
    else{
        a[i]++;
        for(int j=i+1;j<=k;j++){
            a[j] = a[j-1] + 1;
        }
    }
}
int main(){
    int t;cin >> t;
    while(t--){
        cin >> n >> k;
        for(int i=1;i<=k;i++){
            cin >> a[i];
        }
        sinh();
        for(int i=1;i<=k;i++){
            cout << a[i] << " ";
        }
        cout  << endl;
    }
}
/*
input:
2
5 3
1 4 5
out:2 3 4
5 3
3 4 5
out:1 2 3
*///