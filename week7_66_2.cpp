#include<stdio.h>
#include<string.h>
int main(){
    FILE *fp;
    fp = fopen("C:\\temp\\data.txt","w");
    char a[1000];
    scanf("%[^.]",a);

    fprintf(fp,"%s.",a);
    return 0;
 }