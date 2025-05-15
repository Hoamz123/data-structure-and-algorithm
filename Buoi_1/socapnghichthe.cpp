#include<bits/stdc++.h>
using namespace std;
int a[1000001];int n;

int merge(int l,int m,int r){
    vector<int> x(a + l,a + m + 1);
    vector<int> y(a + m + 1,a + r + 1);
    int sizeX = x.size();int sizeY = y.size();
    int i = 0,j = 0;
    int k = l;
    int cnt = 0;//nho de cnt trong day
    while(i < sizeX && j < sizeY){
        if(x[i] <= y[j]){
            a[k++] = x[i++];
        }
        else{
            cnt += sizeX - i;
            a[k++] = y[j++];
        }
    }
    while(i < sizeX) a[k++] = x[i++];
    while(j < sizeY) a[k++] = y[j++];
    return cnt;
}

int cnt_merge(int l,int r){
    int dem = 0;
    if(l < r){
        int m = (l+r)/2;
        dem += cnt_merge(l,m);
        dem += cnt_merge(m + 1,r);
        dem += merge(l,m,r);
    }
    return dem;
}

int main(){
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    
    cout << cnt_merge(0,n-1);

}