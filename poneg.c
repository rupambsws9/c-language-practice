#include<stdio.h>
int main(){
    float number;
    printf("Input a number: ");
    scanf("%f",&number);
    if(number>0){
        printf("%f is positive\n",number);
    }else if(number<0){
        printf("%f is negative\n",number);
    }else{
        printf("%f is 0\n",number);
    }
    return 0;
}