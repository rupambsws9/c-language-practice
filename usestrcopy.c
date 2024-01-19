#include<stdio.h>
#include<string.h>
int main(){
    char copyname[20];
    char name[]="Rupam Biswas";
    strcpy(copyname,name);
    printf("%s",copyname);
    return 0;
}