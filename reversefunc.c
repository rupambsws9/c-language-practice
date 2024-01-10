#include<stdio.h>
int reversefunc(int num){
    int n=num;
    int remender=0;
    int sum=0;
    while(num>0){
      remender=num%10;
      sum=(sum*10)+remender;
      num=num/10;
    }
    return sum;
}
int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    int reverse=reversefunc(a);
    printf("%d",reverse);

}