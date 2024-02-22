#include<stdio.h>
void counting();
void main(){
    int i;
    for(i=1;i<=3;i++)
    counting();
}
void counting(){
    static int count;
    printf("\nFunction counting() called %d time(s)",++count);
}