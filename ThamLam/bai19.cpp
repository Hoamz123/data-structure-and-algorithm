#include<bits/stdc++.h>
using namespace std;
//[Tham Lam]. Bài 20. Cặp số
int main(){
    int n;cin >> n;
    int a[n];
    vector<int> chan;
    vector<int> le;
    for(int i=0;i<n;i++){
        cin >> a[i];
        if(a[i] % 2 == 0){
            chan.push_back(a[i]);
        }
        else le.push_back(a[i]);
    }
    if((int)chan.size() % 2 == 0){
         cout << "Yes" << endl;
    }
    else{
        //do N nho <= 100 nen code trau
        for(int i=0;i<(int)chan.size();i++){
            for(int j=0;j<(int)le.size();j++){
                if(abs(chan[i] - le[j]) == 1){
                    cout << "Yes" << endl;
                    return 0;//chi can 1 cap co do chenh lech la 1 la ok
                }
            }
        }
        cout << "No" << endl;
    }
    return 0;
}