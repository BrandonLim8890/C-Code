/* Brandon Lim */

#include <stdio.h>

int main(){


float height, weight;

printf("Enter your height in m: ");
scanf("%f", &height);
printf("Enter your weight in kg: ");
scanf("%f", &weight);
printf("\nYour BMI is %f\n\n", weight/(height*height));

return 0;

}
