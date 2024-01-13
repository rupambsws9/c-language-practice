#include<stdio.h>
int main(){
    int i,j,k=0,rows;
    printf("Enter rows: ");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++){
        for(j=1;j<=i;j++){
            k++;
            printf("%d", k);
        }
        printf("\n");
    }
    return 0;
}