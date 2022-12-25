//WAP to enter a character and check whether it is lower case, upper case, digit or special character
#include<stdio.h>
int main()
{
    char character;
    printf("Enter a character : ");
    scanf("%s", &character);
    int ascii = (int)character;
    if(ascii>=65 && ascii<=90){
        printf("Upper case character \n");
    }
    else if (ascii>=97 && ascii<=128){
        printf("Lower case character \n");
    }
    else if (ascii>=48 && ascii<=57){
        printf("Digit \n");
    }
    else{
        printf("Special Character \n");
    }
    return 0;
}
