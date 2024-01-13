#include<stdio.h>
int main(){
    int a,b,c=1;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
    a=b;
    b=c;
    c=a;
    printf("First number=%d\n",a);
    printf("Second number=%d\n",b);
    return 0;
}