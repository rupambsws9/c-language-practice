#include<stdio.h>
int main(){
    int i;
    printf("Enter a number: ");
    scanf("%d",&i);
    printf("First:%d",i);
    printf("Second:%d\n",i++);
    printf("Third:%d\n",++i);
    printf("Forth:%d\n",i++);
    printf("Last:%d\n",i);
    return 0;
}