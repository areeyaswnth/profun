#include<stdio.h>
int main(){
    float n,temp,sqr;
    scanf("%f",&n);
    sqr=n/2;
    temp=0;
    if(n>=0){
     while (sqr!=temp)
    {
        temp=sqr;
        sqr=((n/temp)+temp)/2;

    }
    printf("%f",sqr);       
    }
    else{
        printf("error");
    }
    return 0;

}