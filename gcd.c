#include<stdio.h>
int main(){
    int a,b;
    int gcd;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
    for(int i=1;i<=a&&i<=b;i++){
        if(a%i==0&&b%i==0)
        {
             gcd=i;
        }
    }
    printf("%d\n",gcd);
    return 0;
}