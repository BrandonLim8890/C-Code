/* Brandon Lim, Simone Stern, Jacob Lineahl, Zachary Hine*/
#include <stdio.h>
int main() {
int totalq = 4;
int counter=0;
int input;
printf("Here's a quiz! \nQ1) what is the captital of Vietnam?\n");
printf(" 1) Saigon\n");
printf(" 2) Hanoi\n");
printf(" 3)Vientiane\n");
scanf("\n%d", &input);
if(input == 2){
printf("That's correct!\n");
counter++;
}else{
printf("Sorry, that's not right.\n");
}

printf("Q2) Who was Charles Boole?\n");
printf(" 1) A founding father of the USA\n");
printf(" 2) The inventor of sliced bread\n");
printf(" 3) A mathematician who invented his own field of logic\n");
scanf("\n%d", &input);
if(input == 3){
printf("That's correct!\n");
counter++;
}else{
printf("Sorry, that's not right. The correct answer is 3\n");
}
printf("Q3) What is the name of the line segment that starts at the vertex of a triangle and ends at the midpoint of the opposite side?\n");
printf(" 1) Altitude\n");
printf(" 2) Median\n");
printf(" 3) Angle Bisector\n");
scanf("\n%d", &input);
if(input == 2){
printf("That's correct!\n");
counter++;
}else{
printf("Sorry, that's not right.\n");
}
printf("Q4) what is an electron?\n");
printf(" 1) A particle\n");
printf(" 2) A wave\n");
printf(" 3)Both\n");
scanf("\n%d", &input);
if(input == 3){
printf("That's correct!\n");
counter++;
}else{
printf("Sorry, that's not right.\n");
}

printf("\nYou scored %d out of %d correct!\n\n",counter, totalq);
return 0;
}
