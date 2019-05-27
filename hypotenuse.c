/* Brandon Lim. Hypotenuse */

#include <stdio.h>
#include <math.h>

void hypotenuse() {

  float a,b,c;

  printf("Enter the length of the first side: ");
  scanf("%f", &a);

  printf("\nEnter the length of the second side: ");
  scanf("%f", &b);

  c = sqrt(a*a + b*b);

  printf("\nThe hypotenuse of your triangle is %.2f\n\n", c);

  printf("\n\n");

}

int main() {

  int i;

  for(i = 0; i < 3; i++){
    hypotenuse();
  }

  return 0;
}
