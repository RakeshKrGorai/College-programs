#include <stdio.h>

int main()
{
    char in_name[80];
    FILE *in_file;
    int ch;

    printf("Enter file name:\n");
    scanf("%s", in_name);

    in_file = fopen(in_name, "r");

    if (in_file == NULL)
    {
        printf("Can't open %s for reading.\n", in_name);
    }
    else
    {
        while ((ch = fgetc(in_file)) != EOF)
        {
            printf("%c", ch);
        }
        fclose(in_file);
    }
    return 0;
}
