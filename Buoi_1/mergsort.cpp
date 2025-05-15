#include<bits/stdc++.h>
using namespace std;

int a[1000001];
int n;
void merg(int l,int m,int r){
    vector<int> x(a+l,a+m+1);//dau mut khong lay ne vecotr x se lay den gia tri tai i = m;
    vector<int> y(a+m+1,a+r+1);
    int sizeX = x.size();
    int sizeY = y.size();
    int k = l;int i = 0,j = 0;
    
    while(i < sizeX && j < sizeY){
        if(x[i] <= y[j]){
            a[k++] = x[i++];
        }
        else{
            a[k++] = y[j++];
        }
    }
    while(i < sizeX) a[k++] = x[i++];
    while(j < sizeY) a[k++] = y[j++];
}


void merge_Sort(int l,int r){
    //su dung thuat toan chia tri de chia den khi chi con 1 phan tu thi bat dau gop mang
    if(l >= r) return;

    int m = (l+r)/2;
    merge_Sort(l,m);
    merge_Sort(m+1,r);
    merg(l,m,r);
}

int main(){
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }

    merge_Sort(0,n-1);
    for(int i=0;i<n;i++){
        cout << a[i] << " ";
    }
}