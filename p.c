#include<stdio.h>
void plaindromefunc(int i){
    int n=i;
    int remender=0;
    int sum=0;
    while(i>0){
        remender=n%10;
        sum=(sum*10)+remender;
        i=i/10;
    }
    printf("%d",i,plaindromefunc);
}
int main(){
    int i;
    printf("Enter a number: ");
    scanf("%d",&i);
    plaindromefunc(i);
}