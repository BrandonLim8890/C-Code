/* Brandon Lim. Functions*/

#include <stdio.h>
#include <math.h>

float ftoc() {

  int f;

  printf("Enter temperature in Fahrenheit: ");
  scanf("%d", &f);
  int calc = (f-32) * 5/9;

  return calc;

}


float ctof() {

  int c;

  printf("Enter temperature in Celsius: ");
  scanf("%d", &c);
  int calc = (c*9/5) + 32;

  return calc;

}


int main() {

  int input;

  printf("1: Convert Fahrenheit to Celsius\n2: Convet Celsius to Fahrenheit\nEnter an option: ");
  scanf("%d", &input);

  if (input == 1) {

    float f = ftoc();
    printf("Temperature in Celsius is %.2f\n", f);
  }
  else if(input == 2) {

    float c = ctof();
    printf("Temperature in Celsius is %.2f\n", c);
  }
  else {

    printf("Invalid Entry.\n");
  }

  return 0;
}
