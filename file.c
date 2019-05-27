/* Brandon Lim. File */

#include <stdio.h>

int main() {

  FILE *blah;

  blah = fopen("names.txt", "r");

  char sometext[30];

  while (!feof(blah)){

    fgets(sometext, 30, blah);
    printf("%s\n", sometext);

  }

 fclose(blah);
  return 0;

}
