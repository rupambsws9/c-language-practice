#include<stdio.h>
int fibonaccifunc(int n){
    if(n==0){
        return 0;
    }if(n==1){
        return 1;
    }
    n=fibonaccifunc(n-1)+fibonaccifunc(n-2);
    return n;
}
int main(){
    int n;
    printf("Enter total term: ");
    scanf("%d",&n);
    int terms =fibonaccifunc(n);
    printf("%d\n",terms);
}