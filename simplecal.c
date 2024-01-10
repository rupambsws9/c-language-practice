#include<stdio.h>
int main(){
    float a,b,sum,mul,sub,div;
    printf("Input first number: ");
    scanf("%f",&a);
    printf("Input second number: ");
    scanf("%f",&b);
    sum=a+b;
    printf("%0.1f + %0.1f is :%0.1f\n",a,b,sum);
    mul=a*b;
    printf("%0.1f * %0.1f is :%0.1f\n",a,b,mul);
    sub=a-b;
    printf("%0.1f - %0.1f is :%0.1f\n",a,b,sub);
    div=a/b;
    printf("%0.1f / %0.1f is:%0.1f\n",a,b,div);
    return 0;
}