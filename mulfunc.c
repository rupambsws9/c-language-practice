#include<stdio.h>
int mulfunc(int a,int b){
    int mul=a*b;
    return mul;
}
int main(){
    int a,b;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);  
    int multlification=mulfunc(a,b);
    printf("%d\n",multlification);
}