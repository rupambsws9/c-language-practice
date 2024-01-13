#include<stdio.h>
int main(){
    int i,a,b,c;
     a=1;
     b=1;
     printf("%d\n",a);
     printf("%d\n",b);
     c=a+b;
      printf("%d\n",c);
    for(i=0;i<=10;i++){
      a=b;
      b=c;

      c=a+b;
      printf("%d\n",c);
    }
    return 0;
}