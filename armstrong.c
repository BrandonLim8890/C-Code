/* Brandon Lim. Armstrong Numbers*/

#include <stdio.h>
#include <math.h>

int main () {

  int input;
  int h, t, o, isot, isoh;

  printf("Enter a 3 digit number: ");
  scanf("%d", &input);

  h = input;
  t = input % 100;
  o = input % 10;
  isot = (t - o) / 10;
  isoh = (h - t) / 100;

  int test = (isot * isot * isot) + (isoh * isoh * isoh) + (o * o * o);

  printf("%d, %d, %d\n", isot, isoh, o);
  printf("%d\n", test);

  if (test == input) {

    printf("%d is an Armstrong Number since %d^3 + %d^3 + %d^3 = %d\n", input, isoh, isot, o, input);
  }
  else {

    printf("%d is not an Armstrong number.\n", input);
  }

  return 0;
}
