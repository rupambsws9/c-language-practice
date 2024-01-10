#include<stdio.h>
void diffofab(int a,int b){
    int diff=a-b;
printf("%d\n",diff);
}
int main(){
int a,b;
printf("Enter first number: ");
scanf("%d",&a);
printf("Enter second number: ");
scanf("%d",&b);
diffofab(a,b);
}