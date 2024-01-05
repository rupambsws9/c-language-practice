#include<stdio.h>
int main(){
    float bmi,weight,height;
    printf("Input weight(in KG): ");
    scanf("%f",&weight);
    printf("Input height(in m): ");
    scanf("%f",&height);
    bmi=weight/(height*height);
    if(bmi<18.5){
        printf("Under weight\n");
    }else if(bmi>18.5&&bmi<25){
        printf("Normal weight\n");
    }else if(bmi>25&&bmi<30){
        printf("Over weight");
    }else{
        printf("Obe weight\n");
    }
    return 0;
}