//Brandon Lim. Quadratic equation.

#include <stdio.h>
#include <math.h>

int main(){

float a;
float b;
float c;
float r1;
float r2;
float square1;
float result;

	
printf("Enter a: \n");
scanf("%f", &a);
printf("Enter b: \n");
scanf("%f", &b);
printf("Enter c: \n");
scanf("%f", &c);

square1 = ((b*b)-4*a*c);
result = sqrt(square1);

r1 = (-b+result)/(2*a);
r2 = (-b-result)/(2*a);

printf("\nRoot 1 is %f\n", r1);
printf("Root 2 is %f\n\n", r2);

return 0;

}
