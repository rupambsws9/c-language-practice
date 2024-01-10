#include<stdio.h>
int main(){
    int i,number;
    printf("Enter last limit: ");
    scanf("%d",&number);
    for(i=1;i<=number;i++){
        if(i%8==0){
            printf("%d\n",i);
        }
    }
    return 0;
}