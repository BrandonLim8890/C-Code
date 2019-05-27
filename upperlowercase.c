cl/* Brandon Lim. Alternating upper and lower case*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main () {

  char input[50];
  int i;

  printf("Enter a string: ");
  fgets(input, 50, stdin);

  for(i = 0; i < 50; i = i + 2) {
    input[i] = toupper(input[i]); //Changes every char in position of i to uppercase
    input[i + 1] = tolower(input[i + 1]); //Changes every char in front of the position i to lower case
  }

  printf("\n%s\n", input);
  return 0;
}
