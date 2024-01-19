#include<stdio.h>
int diffofab(int a,int b){
    int diff=a-b;
    return diff;
}
int main(){
int a,b;
printf("Enter first number: ");
scanf("%d",&a);
printf("Enter second number: ");
scanf("%d",&b);
int diff=diffofab(a,b);
printf("%d\n",diff);
}