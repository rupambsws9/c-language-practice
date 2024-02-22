#include<stdio.h>
    void add(int* ptr1,int* ptr2){
        *ptr1=*ptr1+*ptr2;
    }
    int main(){
        int n1=1;
        int n2=2;
        add(&n1,&n2);
        printf("%d",n1);
}