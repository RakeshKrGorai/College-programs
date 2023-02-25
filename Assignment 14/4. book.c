#include<stdio.h>
typedef struct books
{
    int bookno;
    char title[50];
    char author[30];
    float price;
}books;

int main(){
    books details[10];
    int i,j, counter;
    int arr[10];
    for(i=0;i<10;i++){
        printf("---Book %d ---\n",i+1);
        printf("Enter Book no: ");
        scanf("%d", details[i].bookno);
        printf("Enter Book Title : ");
        scanf("%s", details[i].title);
        printf("Enter Author's name : ");
        scanf("%s", details[i].author);
        printf("Enter Price : ");
        scanf("%f", &details[i].price);
    }
    printf("\n");
    for(i=0;i<10;i++){
        for(j=i+1;j<10;j++){
            if(details[j].price>details[i].price){
                arr[i]=j;
            }
        }
    }
    for(i=0;i<10;i++){
        for(j=arr[i];j<10;j++){
            printf("Book no: %d \n", details[j].bookno );
            printf("Book Title : %s", details[j].title);
            printf("Author's name : %s", details[j].author);
            printf("Price : %.2f", details[j].price);
            printf("\n");
        }
    }
}