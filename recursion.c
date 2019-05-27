/* Brandon Lim */

#include <stdio.h>

void loop(int i);

int main() {

  loop(10);

  return 0;

}

void loop(int i) {

  if(i > 1) {
    printf("Hello World\n");
    loop(i-1);
  }
  else {
    return;
  }

}
