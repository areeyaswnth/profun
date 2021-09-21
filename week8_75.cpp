#include<stdio.h>
#include<string.h>
int main(){
    FILE *fp1,*fp2;
    fp1 = fopen("a.txt","r");
    fp2 = fopen("b.txt","w");
    int a,b;
    fscanf(fp1,"%d %d",&a,&b);
    fprintf(fp2,"%d",a+b);
    fclose(fp1);
    fclose(fp2);
    return 0;
 }