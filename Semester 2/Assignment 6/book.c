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
    int arr[10]={0,1,2,3,4,5,6,7,8,9};
    for(i=0;i<10;i++){
        printf("---Book %d ---\n",i+1);
        printf("Enter Book no: ");
        scanf("%d", &details[i].bookno);
        printf("Enter Book Title : ");
        scanf("%s", details[i].title);
        printf("Enter Author's name : ");
        scanf("%s", details[i].author);
        printf("Enter Price : ");
        scanf("%f", &details[i].price);
    }
    printf("\n");
    for(i=0;i<9;i++){
        for(j=i+1;j<10;j++){
            if(details[i].price>details[j].price){
                counter=arr[i];
                arr[i]=arr[j];
                arr[j]=counter;
            }
            else{
                continue;
            }
        }
    }
    for(i=0;i<3;i++){
        printf("Book no: %d \n", details[(arr[i])].bookno );
        printf("Book Title : %s \n", details[(arr[i])].title);
        printf("Author's name : %s \n", details[(arr[i])].author);
        printf("Price : %.2f \n", details[(arr[i])].price);
        printf("\n");
    }
}