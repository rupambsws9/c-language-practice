#include<stdio.h>
struct StudentDetails
{
    char name[20];
    int roll;
    char section[10];
    int marks;
};
int main(){
struct StudentDetails s1[5]={
{"Rupam_Biswas",119,"B",85},
{"Priyam_Ghosh",99,"B",98},
{"Priyotosh_Pal",100,"B",99},
{"Rajtanu_Bagchi",106,"B",80},
{"Rik_Biswas",109,"B",75}
};
for(int i=0;i<5;i++){
   if(s1[i].marks>40){
    printf("%s is pass.\n",s1[i].name);
}else{
    printf("%s is fail.\n",s1[i].name); 
}
}
return 0;
}