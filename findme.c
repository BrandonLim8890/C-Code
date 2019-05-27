/* Brandon Lim. Find me */

#include <stdio.h>
#include <string.h>

int main() {

  char input[50];
  int i;
  int counter = 0;

  printf("Enter a string: ");
  fgets(input, 50, stdin);

  for(i = 0; i < strlen(input); i++) {

    if(input[i] == 'm' && input [i + 1] == 'e') {
      counter++;
    }
  }

  printf("%d Me's in the string\n", counter);
  return 0;
}
