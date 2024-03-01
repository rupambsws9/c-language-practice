#include<stdio.h>
#include<string.h>
int main(){
    char ch[20],ans[20];
        printf("Enter the string: ");
        scanf("%s",ch);
        int length = strlen(ch);
   ans[length] = '\0';
    for (int i=0,j=length-1;i<j;i++,j--) {
        ch[i]=ch[i]+ch[j];
        ch[j]=ch[i]-ch[j];
        ch[i]=ch[i]-ch[j];
    }
    strcpy(ans,ch);
    printf("Reversed string: %s\n",ans);
    return 0;
}