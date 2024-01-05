#include<stdio.h>
int main(){
    int day,second;
    printf("Input number of days: ");
    scanf("%d",&day);
    second=day*24*60*60;
    printf("Second= %d\n",second);
    return 0;
}