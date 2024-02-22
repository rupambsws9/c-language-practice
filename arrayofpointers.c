#include<stdio.h>
int main(){
    int a=1,b=2,c=3,d=4,e=5,f=6,g=7,h=8,i=9,j=10;
    int* arr[]={&a,&b,&c,&d,&e,&f,&g,&h,&i,&j};
    for(int k=0;k<10;k++){
        printf("%d\n",*(arr[k]));
    }
    return 0;
}