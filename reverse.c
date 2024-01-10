#include<stdio.h>
int main(){
    int i;
    printf("Enter a number: ");
    scanf("%d",&i);
    int n=i;
    int sum=0;
    int r;
    while(n>0)
    {
        r=n%10;
        sum=(sum*10)+r;
        n=n/10;
    }
    printf("%d",sum);
}