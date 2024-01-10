#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter First Number: ");
    scanf("%d",&a);
    printf("Enter Second Number: ");
    scanf("%d",&b);
    printf("Enter Third Number: ");
    scanf("%d",&c);
    if((a>b)&&(a>c)){
        printf("%d is largest among three number.\n",a);
    }else if((b>c)&&(b>a)){
        printf("%d is largest among three number.\n",b);
    }else{
        printf("%d is largest among three number.\n",c);
    }
    return 0;
}