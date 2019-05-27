/* Brandon Lim. Prime Number Squares */

#include <stdio.h>

int main() {

  int i, j, totalsq, counter;
  int total = 0;
  int prime = 1;

  for(i = 2; i < 101; i++){

    for(j = 2; j < i; j++) {

        if(i % j == 0) {

          prime = 0;
        }
    }
    if (prime == 1) {
      printf("%d for %d\n",i * i, i);

      totalsq = totalsq + (i * i);
      total = total + i;
      counter++;
    }

    prime = 1;
  }
  int avgtotal = total / counter;
  int avgtotalsq = totalsq / counter;

  printf("Avg for total: %d\nAvg for squared total: %d\n", avgtotal, avgtotalsq);
  return 0;
}
