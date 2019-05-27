//Brandon Lim. Convert Temps

#include <stdio.h>

int main(){

int f;
float c;

printf("Current temperature in fahrenheit > \n");
scanf("%d", &f);
c = (f-32)*5/9;
printf("\nThe temperature is %.0fC\n\n", c);

return 0;

}
