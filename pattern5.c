#include<stdio.h>
int main(){
  int rows=5,i,j,k;
   for(i=1;i<=rows;i++){
    for(j=rows;j>=i;j--){
        printf(" ");
    }
    for(k=1;k<=i;k++){
        printf("*");
    }
    printf("\n");
   }
    return 0;
}