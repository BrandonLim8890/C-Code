/* Brandon Lim. Ascending Numbers */

#include <stdio.h>

int main() {

  int a[3];
  int b[3];
  int c[6];
  int i, j;

  printf("Enter 2 Arrays:\nA: ");
  scanf("%d %d %d", &a[0], &a[1], &a[2]);

  printf("B: ");
  scanf("%d %d %d", &b[0], &b[1], &b[3]);

  for(i = 0; i < 3; i++) {

    for(j = 0; j < 3; j++) {

      if (a[i] < b[j]) {
        c[i] = a[i];
      }
      else{
        c[i] = b[j];
      }
    }
  }

  printf("%d %d %d %d %d %d\n", c[0], c[1], c[2], c[3], c[4], c[5]);

  return 0;
}
