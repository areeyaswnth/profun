#include<stdio.h>
#include<string.h>
int main(){
    FILE *fp;
    fp = fopen("C:\\temp\\data.txt","w");
    char a[1000];
    scanf("%[^.]",a);
/*    for(int i=0;i<strlen(a);i++){
        putc(a[i],fp);
    }
    putc('.',fp);*/
    fputs(a,fp);
    fputs('.',fp)
 }