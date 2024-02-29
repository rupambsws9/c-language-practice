#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
struct ArrayADT
{
    int *array;
    int size;
};
void initilizeArray(struct ArrayADT *arr,int size){
    (*arr).array =(int*)malloc(size * sizeof(int));
    (*arr).size=size;
}
int linearSearch(struct ArrayADT *arr, int key) {
    for(int i=0;i<(*arr).size;i++) {
        if((*arr).array[i] == key) {
            return i;
        }
    }
    return -1;
}
int maxfunc(struct ArrayADT *arr,int size){
    int max=INT_MIN;
    for(int i=0;i<size;i++) {
        if((*arr).array[i]>max) {
            max= (*arr).array[i];
        }
    }
    return max;
}
int minfunc(struct ArrayADT *arr,int size){
    int min=INT_MAX;
    for(int i=0;i<size;i++){
        if((*arr).array[i]<min){
            min= (*arr).array[i];
        }
    }
    return min;
}
void displayArray(struct ArrayADT *arr, int size) {
    for (int i=0;i<(*arr).size;i++) {
        printf("%d ",(*arr).array[i]);
    }
    printf("\n");
}
int main() {
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
    /*int key;
    printf("Enter the key: ");
    scanf("%d",&key);
    int index = linearSearch(&myArray, key);
    if (index!=-1) {
        printf("%d found at index %d\n",key,index);
    } else {
        printf("%d not found in the array\n",key);
    }*/
    int maximum=maxfunc(&myArray,size);
    printf("%d\n",maximum);
    int minimum=minfunc(&myArray,size);
    printf("%d\n",minimum);
    free((myArray).array);
    return 0;
}