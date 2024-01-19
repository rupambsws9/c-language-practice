#include<stdio.h>
int main(){
    int arr[100];
    for(int i=0;i<20;i++){
        printf("Enter a array: ");
        scanf("%d",&arr[i]);
    }
    for(int i=19;i>=0;i--){
        printf("%d \n",arr[i]);
    }
    return 0;
}