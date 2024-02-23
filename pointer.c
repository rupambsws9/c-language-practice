//value swipe using pointer
#include<stdio.h>
void func(int* a,int* b){
    int t;
    t=*a;
    *a=*b;
    *b=t;
}
int main(){
    int a,b;
    a=2;
    b=3;
    func(&a,&b);
    printf("a=%d\nb=%d\n",a,b);
}