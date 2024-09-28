#include<bits/stdc++.h>
using namespace std;
/*
cho so nguyen duong N nhiem vu cua ban la hay liet ke cac hoan vi cua 1,2,3..N
vd:N = 3 outtput:123,132...v.bvvvv
*/
int n,a[1001];
bool ok;
void ktao(){
    for(int i=1;i<=n;i++){
        a[i] = i;
    }
}
void sinh(){
    int i = n-1;
    while(i>=1 && a[i] > a[i+1]){
        --i;
    }
    if(i==0) ok = false;
    else{
        int j = n;
        while(a[i] > a[j]){
            j--;
        }
        swap(a[i],a[j]);
        reverse(a+i+1,a+n+1);
    }
}
/*
int main(){
    int t;cin >> t;
    while(t--){
        cin >> n;
        ktao();ok = true;
        while(ok){
            for(int i=1;i<=n;i++){
                cout << a[i];
            }
            cout << " ";
            sinh();
        }
        cout << endl;
    }
}*/

/*su dung ham co san
int main(){
    int t;cin >> t;
    while(t--){
        cin >> n;
        for(int i=1;i<=n;i++){
            a[i] = i;
        }
        do{
            for(int i=1;i<=n;i++){
                cout << a[i];
            }
            cout << " ";
        }while(next_permutation(a+1,a+n+1));//neu la cau hinh cuoi cung thi se tra ve false
        cout << endl;
    }
}*/

//su dung ham co san sinh theo thu tu ngc
int main(){
    int t;cin >> t;
    while(t--){
        cin >> n;
        for(int i=1;i<=n;i++){
            a[i] = n-i+1;
        }
        do{
            for(int i=1;i<=n;i++){
                cout << a[i];
            }
            cout << " ";
        }
        while(prev_permutation(a+1,a+n+1));
        cout << endl;
    }
}