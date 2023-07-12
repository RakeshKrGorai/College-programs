#include <stdio.h>
int main() {
   int i, space, k = 0;
   for (i = 1; i <= 5; ++i, k = 0) {
      for (space = 1; space <= 5 - i; ++space) {
         printf("  ");
      }
      while (k != 2 * i - 1) {
         printf("* ");
         ++k;
      }
      printf("\n");
   }
   return 0;
}

