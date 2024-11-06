#include<stdio.h>
void swap(int *a,int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
void qs(int l,int r,int a[]){
    int i = l,j = r;
    int x = a[(l+r) / 2];
    while(i<=j){
        while(a[i] < x){
            ++i;
        }
        while(a[j] > x){
            --j;
        }
        if(i <= j){
            swap(&a[i],&a[j]);
            ++i;
            --j;
        }
    }
    if(l<j) qs(l,j,a);
    if(i<r) qs(i,r,a);
}
int main(){
    int n;scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    qs(0,n-1,a);
    int sizeCar = 4;
    int size = 0;
    int cnt = 0;//dem so taxi
    for(int i=0;i<n;i++){
        if(a[i] <= sizeCar){
            size++;
            sizeCar -= a[i];
        }
        else{
            //TH a[i] phai day sang xe khac
            size = 0;//reset
            cnt++;//da duoc 1 xe
            sizeCar = 4;
            size++;
            sizeCar -= a[i];
        }
    }
    if(size != 0){
        //TH cuoi cung vao if ma khong vao else
        cnt++;
    }
    printf("%d ",cnt);
    return 0;
}