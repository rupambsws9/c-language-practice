#include<stdio.h>
int main(){
    int marks;
    printf("Input Your Marks: ");
    scanf("%d",&marks);
    if((marks<=100)&&(marks>=90)){
        printf("Yoyr Grade Is A\n");
    }else if((marks<90)&&(marks>=80)){
        printf("Yoyr Grade Is B\n");
    }else if((marks<80)&&(marks>=60)){
        printf("Yoyr Grade Is C\n");
    }else if((marks<60)&&(marks>=40)){
        printf("Yoyr Grade Is D\n");
    }else{
        printf("You are Fail\n");
    }
    return 0;
}