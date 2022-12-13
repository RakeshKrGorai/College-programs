//WAP to check if input character is vowel or consonant
#include<stdio.h>
int main()
{
    char alphabet;
    printf("Enter an alphabet : ");
    scanf("%s", &alphabet);
    switch (alphabet)
    {
    case 'a' :
        printf("Vowel");
        break;
    case 'e' :
        printf("Vowel");
        break;
    case 'i' :
        printf("Vowel");
        break;
    case 'o' :
        printf("Vowel");
        break;
    case 'u' :
        printf("Vowel");
        break; 
    default:
        printf("Not vowel");
        break;
    }
    return 0;
}
