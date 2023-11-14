#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,i,min;
    char arr[10]={'0','1','2','3','4','5','6','7','8','9'};
    char minute[5];
    char str[50];
    char rev[50];
    scanf("%d",&n);
    min=n%60;
    minute[0]=':';
    minute[1]=arr[min%10];
    min/=10;
    minute[2]=arr[min];
    minute[3]=':';
    minute[4]='\0';
    n/=60;
    i=0;
    while(n>0){
        str[i]=arr[n%10];
        i++;
        n/=10;
    }
    str[i]='\0';
    i--;
    for(min=0;str[i]!='\0';i--,min++){
        rev[min]=str[i];
    }
    rev[n+1]='\0';
    strcat(rev,minute);
    strcat(rev,"qwndk");
    puts(rev);
    return 0;
}