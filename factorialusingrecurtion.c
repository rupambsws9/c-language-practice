#include<stdio.h>
int factfunc(int n){
    if(n==1||n==0){
        return 1;
    }
    return n*factfunc(n-1);
}
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    int ans =factfunc(n);
    printf("Factorial is: %d\n",ans);
}