#include<stdio.h>
int main(){
    char ch;
    printf("Input an alphabet: ");
    scanf("%c",&ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
        printf("%c is vowel\n",ch);
    }else if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
        printf("%c is vowel\n",ch);
    }else{
        printf("%c is consunant\n",ch);
    }
    return 0;
}