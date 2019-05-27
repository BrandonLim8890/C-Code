/* Brandon Lim. High or low */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

  srand(time(NULL));
  int ans = rand() % 99 + 1;

  int input;
  int guess = 1;
  int tries = 7;

  printf("I'm thinking of a number between 1-100. You have %d guesses\n", tries);
  printf("First guess:\n");
  scanf("%d", &input);

  while (guess < tries && input != ans) {

    if (input < ans) {

      printf("Sorry you're too low.\n");

    }

    else {

      printf("Sorry you're too high.\n");

    }

    guess++;

    printf("Guess #%d: ", guess);
    scanf("%d", &input);

  }

  if (input != ans) {

    printf("Sorry, you didn't guess it in 7 tries. The actual number was %d. You lose.\n", ans);

  }

  else {

  printf("You guessed right! The number was %d\n",ans);

  }
  return 0;

}
