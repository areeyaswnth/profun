#include<stdio.h>
int main(){
    long a;
    printf("Enter number :");
    scanf("%ld",&a);
    printf("Factorintg Result :");
    while(a!=1){
        for(long i=1;i<=a;i++){
            if(a%i==0&&i!=1){
                printf("%ld",i);
                if(i!=a){
                printf(" x ");                    
                }
                a=a/i;break;
            }
        }
    }
    return 0;
}
