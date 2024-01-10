#include<stdio.h>
int main(){
    int i,oddseries=1;
    for(i=oddseries;i<50;i++){
        oddseries=oddseries+2;
        printf("%d\n",oddseries);
    }
    return 0;
}