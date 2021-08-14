#include<stdio.h>
int main(){
    long a,sum=0;
    scanf("%ld",&a);
    for(long i=1;i<a;i++){
        if(a%i==0){
            sum=sum+i;
        }
    }
    printf("%ld",sum);


}