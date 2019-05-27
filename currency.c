//Brandon Lim. Currency changer

#include <stdio.h>

int main(){

float p;
float q;
float c;
float usdTotal;

printf("Enter number of Mexicn Pesos > \n");
scanf("%f", &p);
printf("Enter number of Guatemalan Quetzals > \n");
scanf("%f", &q);
printf("Enter number of Salvadoran Colons > \n");
scanf("%f", &c);
usdTotal = (p*.0544)+(q*0.1305)+(c*0.1144);
printf("\nUS Dollars = $%.2f\n\n", usdTotal);


return 0;

}
