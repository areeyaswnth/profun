#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        for(int j=1;j<a*2;j++){
            if(j>a-i&&j<(a*2)-(a-i)) printf("*");
            else printf(" ");
        }
        printf("\n");
    }
    return 0;
}