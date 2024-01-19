#include<stdio.h>
int fibfunc(int i){
  if(i==0){
    return 0;
  }if(i==1){
    return 1;
  }
  i=fibfunc(i-1)+fibfunc(i-2);
  return i;
}
int main(){
    int n,i;
    printf("Enter total term: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
       int series=fibfunc(i);
       printf("%d\n",series);
    }
}