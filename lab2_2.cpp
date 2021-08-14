#include<stdio.h>
int main(){
    int a,b;
    printf("Enter first number :");
    scanf("%d",&a);
    printf("Enter second number :");
    scanf("%d",&b);
    int gcd;
    for(int i=1;i<=a;i++){
        if(a%i==0&&b%i==0)gcd=i;
    }
    printf("Greatest common divisor = %d",gcd);
    return 0;
}