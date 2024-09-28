#include<bits/stdc++.h>
using namespace std;
/*
cho so tu nhien N va mot hoan vi X[] cua 1,2,3.....N -> hay dua ra hoan vi tiep theo
vd: x[] = {1,2,3,4,5} -> x[] = {1,2,3,5,4};
*/
int n,a[1001];
void sinh(){
    int i = n-1;
    while(i>=1 && a[i] > a[i+1]){
        --i;//dich ve ben trai
    }
    if(i==0){
        //cau hinh cuoi cung
        for(int i=1;i<=n;i++){
            a[i] = i;
        }
    }
    else{
        int j = n;
        while(a[i] > a[j]){
            --j;
        }
        swap(a[i],a[j]);
        reverse(a+i+1,a+n+1);
    }
}
/*int main(){
    int t;cin >> t;
    while(t--){
        cin >> n;
        for(int i=1;i<=n;i++){
            cin >> a[i];
        }
        sinh();
        for(int i=1;i<=n;i++){
            cout << a[i] << " ";
        }
        cout << endl;
    }
}*/
//su dung ham co san
int main(){
    int t;cin >> t;
    while(t--){
        cin >> n;
        for(int i=1;i<=n;i++){
            cin >> a[i];
        }
        if(next_permutation(a+1,a+n+1)){
            for(int i=1;i<=n;i++){
                cout << a[i] << " ";
            }
        }
        else{
            // ham next_permutation(a+1,a+n+1) se tra ve false neu la cau hinh cuoi cung -> vd:N = 5 -> 5 4 3 2 1
            for(int i=1;i<=n;i++){
                cout << i << " ";
            }
        }
        cout << endl;
    }
}
/*
input:
2
5
1 2 3 4 5
out: 1 2 3 5 4
5
5 4 3 2 1
out: 1 2 3 4 5
*/