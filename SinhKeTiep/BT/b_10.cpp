#include<bits/stdc++.h>
using namespace std;
int n,a[1001];
void sinh(){
    int i = n-1;
    while(i>=1 && a[i] >= a[i+1]){
        --i;
    }
    if(i==0){
        //cau hinh cuoi cung
        cout << "BIGGEST" << endl;
    }
    else{
        int j = n;
        while(a[i] >= a[j]){
            --j;
        }
        swap(a[i],a[j]);
        reverse(a+i+1,a+n+1);
        for(int i=1;i<=n;i++){
            cout << a[i];
        }
    }
}
/*
int main(){
    int t;cin >> t;int x;
    while(t--){
        cin >> x;//thu tu bo test
        string s;cin >> s;
        n = s.size();
        for(int i=0;i<=(int)s.size() - 1;i++){
            a[i+1] = s[i] - '0';
        }
        cout << x << " ";
        sinh();
        cout << endl;
    }
}*/


//dung ham co san
int main(){
    int t;cin >> t;
    while(t--){
        int tt;cin >> tt;
        string s;cin >> s;
        cout << tt << " ";
        if(next_permutation(s.begin(),s.end())){
            //neu sinh dc ham tren se tra ve true
            cout << s << endl;
        }
        else cout << "BIGGEST" << endl;
    }
}
/*
input:
3
1 123
2 279134399742
3 987

output:
1 132
2 279134423799
3 BIGGEST
*/