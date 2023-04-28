#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  n++;
  int arr[n];

  int runSum = 0;
  scanf("%*c");
  for (int i = 0; i < n; i++) {
    int tmp;
    scanf("%d", &tmp);
    runSum += tmp;
    arr[i] = runSum;
    scanf("%*c");
  }

  printf("[");
  for (int i = 1; i < n; i++) {
    printf("%d", arr[i]);
    if (i != n - 1) {
      printf(",");
    }
  }
  printf("]");
}