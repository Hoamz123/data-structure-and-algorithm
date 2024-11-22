#include<stdio.h>
#include<string.h>
#include<ctype.h>
int m,n;
int a[1001][1001];
int b[1001][1001];
char nameMT_A[101];
char nameMT_B[101];
void readFromFile(){
    FILE *file = fopen("MATRAN.C","r");
    if(file == NULL){
        printf("Errol");
        return;
    }
    //doc kich co hai ma tran
    fscanf(file,"%d",&m);
    fscanf(file,"%d\n",&n);

    //doc cau MATRAN_A
    fgets(nameMT_A,sizeof(nameMT_A),file);

    //doc du lieu cua MT_A
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            fscanf(file,"%d",&a[i][j]);
        }
        fscanf(file,"\n");
    }

    // doc cau MATRAN_B
    fgets(nameMT_B, sizeof(nameMT_B), file);

    //doc du lieu cua MT_B
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            fscanf(file,"%d",&b[i][j]);
        }
        fscanf(file,"\n");
    }
    fclose(file);//dong file
}
//method in du lieu ra console
void outDataOfMatrix(){
    printf("%s",nameMT_A);
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    printf("%s", nameMT_B);

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }

}

void addTwoMatrixAndSaveToFile(){
    FILE *file = fopen("MATRAN.C", "a");
    if(file == NULL){
        printf("Errol");
        return;
    }
    fprintf(file,"MaTran A + B:\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            fprintf(file,"%d",a[i][j] + b[i][j]);
            if(j != n-1) fprintf(file," ");
        }
        fprintf(file,"\n");
    }
    fclose(file);
    printf("Add finished");
}
int main(){
    readFromFile();
    //outDataOfMatrix();
    addTwoMatrixAndSaveToFile();
    return 0;
}