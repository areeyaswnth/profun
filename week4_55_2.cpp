#include<stdio.h>
int main(){
    int a,b,c,copya,copyb;
    scanf("%d %d",&a,&b);
    if(a>b){
        c=a;
        a=b;
        b=c;
    }
    copya=a;
    copyb=b;
    int gcd;
    while (a > 0) {
        int r = b % a;
        b = a;
        a = r;
    }
    gcd=b;
    printf("GCD=%d",gcd);
    printf("\nLCM=%d",(copya/gcd)*(copyb/gcd)*gcd);
    return 0;
}