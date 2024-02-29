#include<stdio.h>
#include<stdlib.h>
struct ArrayADT
{
    int *array;
    int size;
};
void initilizeArray(struct ArrayADT *arr,int size){
    (*arr).array =(int*)malloc(size * sizeof(int));
    (*arr).size=size;
}
int binarySearch(struct ArrayADT *arr, int key,int size){
    int low=0,high=size,mid;
    while(low<=high){
        mid=(low+high)/2;
        if(key==(*arr).array[mid]){
           return mid;
        }else if(key<(*arr).array[mid]){
            high=mid-1;
        }else if(key>(*arr).array[mid]){
            low=mid+1;
        }
    }
    return 0;
}
void displayArray(struct ArrayADT *arr,int size) {
    for (int i=0;i<(*arr).size;i++) {
        printf("%d ",(*arr).array[i]);
    }
    printf("\n");
}
int main(){
    int size;
    printf("Enter the array size: ");
    scanf("%d",&size);
    struct ArrayADT myArray;
    initilizeArray(&myArray,size);
    for (int i=0;i<size;i++) {
        (myArray).array[i]=i*10;
    }
    printf("Array elements: ");
    displayArray(&myArray,size);
    int key;
    printf("Enter the key: ");
    scanf("%d",&key);
    int index = binarySearch(&myArray,key,size);
    if(index!=-1){
        printf("%d found at index %d\n",key,index);
    } else{
        printf("%d not found in the array\n",key);
    }
}