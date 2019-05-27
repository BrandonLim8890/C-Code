/*Brandon Lim. Reverse an Integer */

#include <stdio.h>

int main() {

  int num, t, o, isoh, isot;
  int reverse;

  printf("Eenter a number you want to reverse: ");
  scanf("%d", &num);

  t = num % 100;
  o = num % 10;

  isoh = num-t;
  isot = t-o;
  reverse = o*100 + isoh/100 + isot;

  printf("%d, %d, %d, %d, %d\n", num, t, o, isoh, isot);

  printf("The reversed number is %d.\n", reverse);

  return 0;
}
