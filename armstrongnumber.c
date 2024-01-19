#include<stdio.h>
#include<math.h>
int main(){
    int n,p;
    printf("Enter a number");
    scanf("%d",&n);
    int y = n;
    int c = n,sum=0,l,digitnum=0;
    while(n!=0)
    {
        digitnum++;
        n=n/10;
    }
    while(y!=0)
    {
        l=y%10;
        sum=sum+pow(l,digitnum);
        y=y/10;
    }
    if(sum==c)
    {
        printf("Armstrong");
    }
    else
    {
        printf("not");

    }
}