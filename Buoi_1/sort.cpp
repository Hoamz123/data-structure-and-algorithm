#include <bits/stdc++.h>
using namespace std;
#define ll long long
void SelectionSort(int a[],int n){
    for(int i=0;i<n-1;i++){
        int x = i;
        for(int j=i+1;j<n;j++){
            if(a[j] < a[x]){
                x = j;
            }
        }
        swap(a[i],a[x]);
    }
}
void xxtt(int a[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[j] < a[i]){
                swap(a[j],a[i]);
            }
        }
    }
}
void insertionSort(int a[],int n){
    for(int i=1;i<n;i++){
        int pos = i-1;int x = a[i];
        while(pos >= 0 && a[pos] > x){
            //chuyen va sau
            a[pos + 1] = a[pos];
            pos--;
        }
        a[pos + 1] = x;
    }
}
void quickSort(int a[],int l,int r){
    int i = l,j = r;
    int m = a[(l + r) / 2];
    while(i<=j){
        while(a[i] < m){
            i++;
        }
        while(a[j] > m){
            j--;
        }
        if(i<=j){
            swap(a[i],a[j]);
            i++;
            j--;
        }
    }
    if(i<=r) quickSort(a,i,r);
    if(j>=l) quickSort(a,l,j); 
}
void bubleSort(int a[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1-i;j++){
            if(a[j] > a[j+1]){
                swap(a[j],a[j+1]);
            }
        }
    }
}
void display(int a[],int n){
    for(int i=0;i<n;i++){
        cout << a[i] << " ";
    }
}
int main(){
    int a[5] = {2,3,1,4,5};
    //SelectionSort(a,5);
    //xxtt(a,5);
    //insertionSort(a,5);
    //quickSort(a,0,4);
    //bubleSort(a,5);
    display(a,5);
    return 0;
}