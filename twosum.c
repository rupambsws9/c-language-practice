#include<stdio.h>
#include<stdlib.h>
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    for(int i=0;i<numsSize-1;i++){
       for(int j=i+1;j<numsSize;j++){
         if(nums[i]+nums[j]==target){
             int* result = malloc(2*sizeof(int));
             result[0]=i;
             result[1]=j;
             *returnSize=2;
             return result;
         }  
       }
    }
   *returnSize=0;
   return NULL;
}
int main(){
    int range;
    printf("Enter the range of the array: \n");
    scanf("%d",&range);
    int target;
    printf("Enter target: \n");
    scanf("%d",&target);
    int nums[range];//={2,7,11,15};
    for(int i=0;i<range;i++){
            printf("Enter element of the array: \n");
            scanf("%d",&nums[i]);
    }
     int numsSize = sizeof(nums) / sizeof(nums[0]);
    int returnSize;
    int* result = twoSum(nums, numsSize, target, &returnSize);
    if (returnSize == 2) {
        printf("The indices are: [%d, %d]\n", result[0], result[1]);
    } else {
        printf("No solution found.\n");
    }
  return 0;
}