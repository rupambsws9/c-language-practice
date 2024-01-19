#include<stdio.h>
void fibonaccifunc(int n){
    int a,b,c;
    a=0;b=1;
     printf("%d\n",a);
     printf("%d\n",b);
    for(int i=1;i<=n;i++){
      c=a+b;
      printf("%d\n",c);

      a=b;
      b=c;
    }
}
int main(){
    int n=10;

    fibonaccifunc(n);
}