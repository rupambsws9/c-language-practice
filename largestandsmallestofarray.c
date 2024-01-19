#include<stdio.h>
#include<limits.h>
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    
    int max=0,min=100;
    for(int i=0;i<10;i++){
        if(max<=arr[i]){
          max=arr[i];
        }
        if(min>=arr[i]){
            min=arr[i];
        }
    }
    printf("Largest number is:%d\n",max);
    printf("Smallest number is:%d\n",min);
    return 0;
}