#include<stdio.h>
int main(){
    int i,j,leftshift;
    printf("Input a number: ");
    scanf("%d",&i);
    printf("Input sift of the number: ");
    scanf("%d",&j);
    leftshift=i<<j;
    printf("%d",leftshift);
    return 0;
}