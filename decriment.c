#include<stdio.h>
int main(){
    int i=0;
    printf("%d\n",(i--)+(--i)+(--i)+(i--)+(i--));
    return 0;
}