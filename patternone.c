/* Brandon Lim. PatternOne */

#include <stdio.h>


int main(){

  int n;
  int i;
  int j;

  printf("Please enter a number between 1 and 9: ");
  scanf("%d", &n);

  for(j = 0; j <= n; j++){

    for(i = 0; i < j; i++) {

      printf("%d ", i + 1);
    }

    printf("\n");
  }

  return 0;
}
