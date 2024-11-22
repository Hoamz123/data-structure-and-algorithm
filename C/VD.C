#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char s[1001];
    int mp[256] = {0};
    scanf("%s",s);

    for(int i=0;s[i] != '\0';i++){
        if(isalpha(s[i])){
            mp[(int)s[i]]++;
        }
    }
    //do cac chu cai co gia tri trong bang ASCII tang dan len mac dinh se in ra theo tang dan alphabel
    int tx = -1;
    char x;
    for(int i=0;i<256;i++){
        if(mp[i] > 0){
            if(mp[i] > tx){
                tx = mp[i];
                x = char(i);
            }
            printf("%c%d",char(i),mp[i]);
        }
    }
    printf("\n%c",x);
}