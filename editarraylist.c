#include<stdio.h>
#include<stdlib.h>
struct arraylist
{ 
    int length;
    int size;
    int* arr;
};
void editarraylist(struct arraylist a1){
    int elements;
    printf("Enter elements: \n");
    scanf("%d",&elements);
    if(a1.size+elements<=a1.length){
    for(int i=a1.size;i<a1.length;i++){
    printf("Enter element of the array: \n");
    scanf("%d",&a1.arr[i]); 
    }
    }else{
        printf("The array is full.\n");
    }

}
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
    editarraylist(a1);
}