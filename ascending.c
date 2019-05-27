/* Brandon Lim. Ascending Numbers */

#include <stdio.h>
#include <string.h>

int main() {

  int a[3], b[3];
  int i, j, temp;

  printf("Enter 2 Arrays:\nA: ");
  scanf("%d %d %d", &a[0], &a[1], &a[2]);

  printf("B: ");
  scanf("%d %d %d", &b[0], &b[1], &b[2]);

  int c[6] = {a[0], a[1], a[2], b[0], b[1], b[2]};

  for(i = 0; i < 6; i++) {
    for(j = i; j < 6; j++) {

      if (c[i] > c[j]) {
        temp = c[i];
        c[i] = c[j];
        c[j] = temp;
      }
    }
  }
  printf("%d %d %d %d %d %d\n", c[0], c[1], c[2], c[3], c[4], c[5]);

  return 0;
}
