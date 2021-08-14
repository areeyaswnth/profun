#include<stdio.h>
#include<string.h>
int main(){
    char a[1000];
    long A=0,E=0,I=0,O=0,U=0;
    scanf("%[^\n]",a);
    for(long i=0;i<strlen(a);i++){
        if(a[i]=='i'||a[i]=='I')I++;
        else if(a[i]=='e'||a[i]=='E')E++;
        else if(a[i]=='a'||a[i]=='A')A++;
        else if(a[i]=='o'||a[i]=='O')O++;
        else if(a[i]=='u'||a[i]=='U')U++;
    }
    printf("A: %ld\n",A);
    printf("E: %ld\n",E);
    printf("I: %ld\n",I);
    printf("O: %ld\n",O);
    printf("U: %ld\n",U);
 }