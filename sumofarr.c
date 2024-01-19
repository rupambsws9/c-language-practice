#include<stdio.h>
int main(){
    int elements,sum=0;
    printf("Enter number of elements: ");
    scanf("%d",&elements);
    int arr[elements];
    for(int i=0;i<elements+1;i++){
        printf("Enter numbers: ");
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<elements+1;j++){
        sum=sum+arr[i];
    }
    printf("%d",sum);
    return 0;
}