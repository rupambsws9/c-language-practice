//find unique variable from an array
#include<stdio.h>
int main(){
    int n;
    printf("Enter number of elements: \n");
    scanf("%d",&n);
    int arr[n],c=0;
    for(int i=0;i<n;i++){
            printf("Enter element: \n");
            scanf("%d",&arr[i]);
        }
    for(int i=0;i<n;i++){
        c=0;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                c++;
            }
        }
            if(c==1){
                printf("Unique element is: %d\n",arr[i]);
            }
    }
    return 0;
}