#include<stdio.h>
int main(){
    int i;
    char str[]="Rupam Biswas";
    char strcopy[20];
    for( i=0;str[i]!='\0';i++){
        strcopy[i]=str[i];
        
    }
    strcopy[i]='\0';
    
    printf("Copied string is %s",strcopy);
    return 0;
}