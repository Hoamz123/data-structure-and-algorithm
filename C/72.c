#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
    char s[1001];
    fgets(s,sizeof(s),stdin);
    s[strlen(s) - 1] = '\0';

    strupr(s);
    puts(s);

}