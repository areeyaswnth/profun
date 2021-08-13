#include<stdio.h>
int a;
int n=1;
int loop(int i){
    if (i<=a){
        printf("*");
        return (loop(i+1));
    }
    else 
    {return a+1;
    }

}
int main(){
    scanf("%d",&a);
    loop(n);
}