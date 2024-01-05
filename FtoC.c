#include <stdio.h>
int main(){
double celsious,fahrenheit;
printf("Input temperature(in F): ");
scanf("%lf",&fahrenheit);
celsious=((5.0/9.0)*(fahrenheit-32));
printf("The temperature in Celsius is %lf",celsious);
return 0;
}