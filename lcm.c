#include<stdio.h>
int main(){
    int a,b,gcd,lcm;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second nuber: ");
    scanf("%d",&b);
    for(int i=1;i<=a&&i<=b;i++){
        if(a%i==0&&b%i==0){
            lcm=i;
        }
    }
    gcd=a*b/lcm;
    printf("%d\n",gcd);
    return 0;
}