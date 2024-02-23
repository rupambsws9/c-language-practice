#include<stdio.h>
struct bookbank
{
    char title[50];
    int ISBN;
    char author[50];
    int no_of_books_available;
};
int main(){
    int n,i,j;
    printf("Enter total book: \n");
    scanf("%d",&n);
    struct bookbank library[n];
    for(i=0;i<n;i++){
        j=i+1;
      printf("Enter %d no. book title: \n",j);
      scanf(" %s",&library[i].title);
      printf("Enter %d no. book ISBN: \n",j);
      scanf(" %d",&library[i].ISBN);
      printf("Enter %d no. book author: \n",j);
      scanf(" %s",&library[i].author);
      printf("Enter %d no. book quantity: \n",j);
      scanf(" %d",&library[i].no_of_books_available);
    }
    for(int i=0;i<n;i++){
        j=i+1;
        printf("%d no. book details: title- %s ISBN- %d Author- %s Quantity- %d \n",j,library[i].title,library[i].ISBN,library[i].author,library[i].no_of_books_available);
    }
}