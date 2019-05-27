/* Brandon Lim. Arrays */

#include <stdio.h>

int main() {

  int mimzy[6] = {1, 2, 3, 4, 5, 6};
  int i;

  for (i = 0; i < 6; i = i + 2) {
    int temp = mimzy[i];
    mimzy[i] = mimzy[i + 1];
    mimzy[i + 1] = temp;
    printf("%d %d ",mimzy[i], mimzy[i + 1]);
  }

  printf("\n");
  return 0;
}
