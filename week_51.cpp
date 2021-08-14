#include<stdio.h>
#include<string.h>
int main(){
    char a[1000];
    long N=0,n=0;
    scanf("%[^\n]",a);
    for(long i=0;i<strlen(a);i++){
        if(a[i]>='a'&&a[i]<='z')n++;
        else if(a[i]>='A'&&a[i]<='Z')N++;
    }
    printf("A-Z: %ld\n",N);
    printf("a-z: %ld\n",n);

 }