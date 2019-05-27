/* Brandon Lim */

#include <stdio.h>
#include <string.h>

int main() {

  int i;
  char input[50];
  int vowel, digit;

  printf("Enter a string: ");
  fgets(input, 50, stdin);

  for(i = 0; i < 50; i++) {

    if (input[i] == 'a' || input[i] == 'e' || input[i] == 'o' || input[i] == 'u' || input[i] == 'i') {

      vowel++;
    }
    else if(input[i] == '1' || input[i] == '2' || input[i] == '3' || input[i] == '4' || input[i] == '5' || input[i] == '6' || input[i] == '7' || input[i] == '8' || input[i] == '9' || input[i] == '0')

      digit++;
  }

  printf("\nNumber of vowels: %d\n", vowel);
  printf("Number of digits: %d\n\n", digit);
  return 0;
}
