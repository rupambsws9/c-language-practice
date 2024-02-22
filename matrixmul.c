#include<stdio.h>
int main(){
    int a,b,c,d,sum=0;
    printf("Enter order For first matrix: ");
    scanf("%d\n%d",&a,&b);
    printf("Enter order For second matrix: ");
    scanf("%d\n%d",&c,&d);
    int matrix[a][b],matrix2[c][d];
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            printf("Enter element (first): \n");
            scanf("%d",&matrix[i][j]);
        }
    }
    for(int i=0;i<c;i++){
        for(int j=0;j<d;j++){
            printf("Enter element (second): \n");
            scanf("%d",&matrix2[i][j]);
        }
    }
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
           for(int j=0;j<b;j++){
            sum+=(matrix[i][j]*matrix2[j][i]);
               printf("%d\n",sum);
           }

        }
    }
    return 0;
}