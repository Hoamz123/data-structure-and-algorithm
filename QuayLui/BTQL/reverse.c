#include<stdio.h>
int n,k;
int a[1001],x[1001],ok;
void swap(int *a,int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
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
            swap(&a[i],&a[j]);
            i++;
            j--;
        }
    }
    if(i<=r) quickSort(a,i,r);
    if(j>=l) quickSort(a,l,j);
}
void ktao(){
    scanf("%d %d",&n,&k);
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    quickSort(a,1,n);
    ok = 0;
}
void Try(int i,int idx,int sum){
    for(int j=idx;j<=n;j++){
        x[i] = a[j];
        if(sum + a[j]== k){
            ok = 1;
            printf("[");
            for(int k=1;k<=i;k++){
                if(k!=i) printf("%d ",x[k]);
                else printf("%d]",x[k]);
            }
            printf("\n");
        }
        else if(sum + a[j] < k){
            Try(i+1,j+1,sum + a[j]);
        }
    }
}
int main(){
    ktao();
    Try(1,1,0);
    if(!ok) printf("-1");
}