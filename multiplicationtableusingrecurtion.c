#include<stdio.h>
void mulfuncarr(int a,int i){
    if(i==11){
        return;
    }
        printf("Multlification table of %d * %d is: %d\n",a,i,a*i);
        mulfuncarr(a,i+1);
}
int main(){
    int a,i=1;
    printf("Enter a: ");
    scanf("%d",&a);
    mulfuncarr(a,i);
}