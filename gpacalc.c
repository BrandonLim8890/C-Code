/* Brandon Lim. GPA Calculator */

#include <stdio.h>
#include <stdlib.h>

char ans[3];

float gpapoint();



int main() {

  int class, hon;
  float total = 0;

  system("clear");

  printf("=============================================================================================\n\n\n");
  printf("Welcome to the GPA Calculator! All Hnrs and AP classes count for a .5 boost here, so take that into account.\n\n");

  printf("Enter the number of classes you take: ");
  scanf("%d", &class);

  for(int  i = 0; i < class; i++) {
    system("clear");
    total += gpapoint();
  }

  printf("\n\nEnter the number of Honours classes you take: ");
  scanf("%d", &hon);

  system("clear");

  total = total + (hon * 0.5);
  float gpa = total/class;

  printf("\n\nYour GPA is %.2f\n\n", gpa);

  if(gpa >= 4.00) {
    printf("You're killing it! WP\n\n\n");
  }
  else if(gpa >= 3.50) {
    printf("You're doing well! Keep it up!\n\n\n");
  }
  else if(gpa <= 3.00) {
    printf("Maybe you should stop looking at memes and study more...\n\n\n");
  }
  else{
    printf("rip...\n\n\n");
  }

  return 0;

}



float gpapoint() {

  int input;

  printf("Enter the grade for your class\n\n");
  printf("1. C-\n");
  printf("2. C\n");
  printf("3. C+\n");
  printf("4. B-\n");
  printf("5. B\n");
  printf("6. B+\n");
  printf("7. A-\n");
  printf("8. A\n");
  printf("9. A+\n");
  printf("10. Exit\n");

  scanf("%d", &input);

  if(input == 1) {
    return 1.66;
  }
  else if(input == 2) {
    return 2.00;
  }
  else if(input == 3) {
    return 2.33;
  }
  else if(input == 4) {
    return 2.67;
  }
  else if(input == 5) {
    return 3.00;
  }
  else if(input == 6) {
    return 3.33;
  }
  else if(input == 7) {
    return 3.67;
  }
  else if(input == 8) {
    return 4.00;
  }
  else if(input == 9) {
    return 4.33;
  }
  else if(input == 10) {
    abort();
  }
  else {
    printf("Invalid input, try again.\n");
    gpapoint();
  }
}
