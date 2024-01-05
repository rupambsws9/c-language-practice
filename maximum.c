#include<stdio.h>
int main(){
    int a,b,max;
    printf("Input first number: ");
    scanf("%d",&a);
    printf("Input second number: ");
    scanf("%d",&b);
    if(a>b){
        printf("%d is maximum number of two.\n",a);
    }else{
        printf("%d is maximum number of two.\n",b);
    }
    return 0;
}