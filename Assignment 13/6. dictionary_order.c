#include <stdio.h>
#include <string.h>

void dict_sort(char *arr[], int n) {
    char *temp;
    int i, j;

    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (strcmp(arr[i], arr[j]) > 0) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    char *strings[] = {"Hello","World","Programming","Is","Fun"};
    int n = sizeof(strings)/sizeof(strings[0]);
    int i;
    // printf("%d",n);

    printf("Before sorting:\n");
    for ( i = 0; i < n; i++) {
        printf("%s\n", strings[i]);
    }

    dict_sort(strings, n);

    printf("\nAfter sorting:\n");
    for (i = 0; i < n; i++) {
        printf("%s\n", strings[i]);
    }

    return 0;
}