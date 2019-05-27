/* Brandon Lim */

#include <stdio.h>

int main() {

  enum status { TEMP, APPRENTICE, PERMANENT };

  enum status mystatus = APPRENTICE;

  mystatus++;

  printf("%d\n", mystatus);

  return 0;
}
