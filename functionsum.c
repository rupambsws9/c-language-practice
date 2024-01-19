#include<stdio.h>
int sumarr(int i,int j){
    int add=i+j;
    return add;
}
int main(){
    int a,b;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
    int sum=sumarr(a,b);
    printf("%d",sum);
}