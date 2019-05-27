/* Brandon Lim. HangMan Game */

#include <stdio.h>
#include <string.h>

int main() {

  int lives = 7;
  int wordcount = 5;
  char s1[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
  char input;
  int state = 0;
  int ans = 0;

  printf("Welcome to Hangman! You get %d lives.\n\n", lives);
  int i;
  for(i = 0; i <= wordcount; i++) {

    printf("_ ");
  }

  printf("\n\nPlease try a character: ");
  scanf("%c", &input);

  while (state != 1) {

    ans = 0;

    for(i = 0; i < strlen(s1); i++){
      if(input == s1[i]){
        ans = 1;
      }
    }

    if(ans == 1) {

      printf("You got one of the characters! Keep going!\n");
    }
    else {

      printf("Sorry thats not one of the characters. Try again.\n");
      lives--;
    }

    printf("\n\nPlease try a character: ");
    scanf("%c", &input);
  }

  return 0;
}
