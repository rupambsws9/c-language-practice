#include<stdio.h>
int main(){
    int a,i,sum=1;
    printf("Enter a number: ");
    scanf("%d",&a);
    for(i=a;i>0;i--){
       sum=sum*i; 
    }
printf("%d\n",sum);
}