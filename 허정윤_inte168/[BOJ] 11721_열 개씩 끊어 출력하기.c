#include<stdio.h>

char s[100];

int main(){
    scanf("%s", s);
    int t=1;
    int i=0;
    while(1){
        putchar(s[i]);
        if(t==10){
            printf("\n");
            t=1;
        }
        else t++;
        i++;
        if(s[i]==NULL) break;
    }
}