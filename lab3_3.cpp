#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        for(int j=1;j<=a;j++){
            if(j<=i)printf("*  ");
            else printf("   ");
        }
        for(int k=1;k<a;k++){
            if(k>=a-i)printf("*  ");
            else printf("   ");
        }
        printf("\n");
    }
    for(int i=1;i<a;i++){
        for(int j=1;j<=a;j++){
            if(j<=a-i)printf("*  ");
            else printf("   ");
        }
        for(int k=1;k<a;k++){
            if(k>=i)printf("*  ");
            else printf("   ");
        }
        printf("\n");
    }

}