/* Brandon Lim. Patteronone2 */

#include <stdio.h>


int main() {

  int i,j,n,x;


  printf("Enter a number between 1-9: ");
  scanf("%d", &n);


  for(i = 1; i <= n; i++) {

    for(x = n; x > i; x--) {

      printf(" ");
    }

    for(j = 0; j < i; j++) {

      printf("%d", j + 1);
    }

    printf("\n");
  }

  return 0;
}
