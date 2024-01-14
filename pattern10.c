#include<stdio.h>
int main(){
    int i,rows,cols;
    char ch;
    printf("Enter rows: ");
    scanf("%d",&rows);
    cols=rows;
    for(i=1;i<=rows;i++){
        for(ch='A';ch<='A'+cols;ch++){
            printf("%c",ch);
        }
        printf("\n");
    }
    return 0;
}