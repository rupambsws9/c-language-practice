#include<stdio.h>
int main(){
    float a,b,c;
    printf("Input a: ");
    scanf("%f",&a);
    printf("Input b: ");
    scanf("%f",&b);
    printf("Input c: ");
    scanf("%f",&c);
    if((c<a+b)&&(b<a+c)&&(a<b+c)){
        printf("This is a trangle\n");
    }else{
        printf("This is not a trangle\n"); 
    }
    return 0;
}