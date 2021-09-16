#include<stdio.h>
#include<string.h>
int main(){
    FILE *fp;
    fp = fopen("C:\\temp\\data.txt","w");
    char a[1000];
    while(1){
         scanf("%s",a);            
         fprintf(fp,"%s\n",a);
         if(a[strlen(a)-1]=='.') break;
    }
    return 0;
 }