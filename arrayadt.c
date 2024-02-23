#include<stdio.h>
#include<stdlib.h>
struct arraylist
{ 
    int length;
    int size;
    int* arr;
};
int main(){
    struct arraylist a1;
    printf("Enter length: \n");
    scanf("%d",&a1.length);
    printf("Enter size: \n");
    scanf("%d",&a1.size);
    a1.arr=(int*)malloc(a1.length*sizeof(int));
    for(int i=0;i<a1.size;i++){
        printf("Enter element of the array: \n");
        scanf("%d",&a1.arr[i]);
    }
    printf("The array is: \n");
    for(int i=0;i<a1.size;i++){
        printf("%d\n",a1.arr[i]);
    }
}