#include<stdio.h>
int a;

int loop(int i,int j){
    if (i<=a){
        if((i==1||i==a)||(j==1||j==a))  printf("*");
        else printf(" ");

        return (loop(i+1,j));
    }
    else 
        return a+1;

}
int main(){
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        int n=1;
        loop(n,i);  
        printf("\n");

    }

}