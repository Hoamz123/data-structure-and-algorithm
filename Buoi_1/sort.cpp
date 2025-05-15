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
            //chuyen ve sau
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

void merge(vector<int>& arr, int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    std::vector<int> leftArr(n1), rightArr(n2);

    for (int i = 0; i < n1; i++)
        leftArr[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        rightArr[j] = arr[mid + 1 + j];

    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (leftArr[i] <= rightArr[j]) {
            arr[k++] = leftArr[i++];
        } else {
            arr[k++] = rightArr[j++];
        }
    }

    while (i < n1) {
        arr[k++] = leftArr[i++];
    }

    while (j < n2) {
        arr[k++] = rightArr[j++];
    }
}

void mergeSort(vector<int>& arr, int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        merge(arr, left, mid, right);
    }
}

void display(int a[],int n){
    for(int i=0;i<n;i++){
        cout << a[i] << " ";
    }
}
int main(){
    //int a[5] = {2,3,1,4,5};
    //SelectionSort(a,5);
    //xxtt(a,5);
    //insertionSort(a,5);
    //quickSort(a,0,4);
    //bubleSort(a,5);
    //display(a,5);
    vector<int> v;
    for(int i=0;i<10;i++){
        v.push_back(10 - i);
    }
    mergeSort(v,0,9);
    for(int i : v) cout << i << " ";
    return 0;
}