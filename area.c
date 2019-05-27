/* Brandon Lim. Area */

#include <stdio.h>
#include <math.h>
#define M_PI 3.14159265358979323846

void tri();
void rect();
void sqr();
void circ();

int main() {

  char input;
  printf("\n 1) Trianlge\n 2) Rectangle\n 3) Square\n 4) Circle\n 5) Quit\n\nWhich shape: ");
  scanf("%c", &input);
  while (input != '5') {

    if(input == '1')
      tri();
    else if(input == '2')
      rect();
    else if(input == '3')
      sqr();
    else if(input == '4')
      circ();
    else if(input != '5')
      printf("\nInvalid input, try again\n\n");

      printf("\n 1) Trianlge\n 2) Rectangle\n 3) Square\n 4) Circle\n 5) Quit\n\nWhich shape: ");
      scanf("%c", &input);
  }

  printf("\nGoodbye\n\n");

  return 0;
}

void tri() {

  float b = 0, h = 0, area;

  printf("\nTriangle\n================\n\nBase: ");
  scanf("%f", &b);
  printf("Height: ");
  scanf("%f", &h);

  area = 0.5 * b * h;

  printf("\nThe area is %.2f\n================\n\n", area);
}

void rect() {

  float b, h, area;

  printf("\nRectangle\n================\n\nBase: ");
  scanf("%f", &b);
  printf("Height: ");
  scanf("%f", &h);

  area = b * h;

  printf("\nThe area is %.2f\n================\n\n", area);
}

void sqr() {

  float s, area;

  printf("\nSquare\n================\n\nSide: ");
  scanf("%f", &s);

  area = s * s;

  printf("\nThe area is %.2f\n================\n\n", area);
}

void circ() {

  float r, area;

  printf("\nCircle\n================\n\nRadius: ");
  scanf("%f", &r);

  area = r * r * M_PI;

  printf("\nThe area is %.2f\n================\n\n", area);
}
