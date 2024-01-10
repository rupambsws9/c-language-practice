#include<stdio.h>
int divby8func(int a,int number){
        if(a%8==0){
        return 1;
    }else{
        return 0;
    }
}
int main(){
    
    for(int i=1;i<100;i++){
        if(divby8func(i,100)==1)
        {
            printf("%d is divisible\n",i);
        }

    }
     
}