/* Brandon Lim. Sum of K numbers */

#include <stdio.h>

int loop(int k);

int main() {

  int k;

  printf("What is K?\n");
  scanf("%d", &k);
  int sum = loop(k);

  printf("%d\n", sum);

  return 0;
}

int loop(int k) {

  if(k > 0){
    int sum = k + loop(k-1);
    return sum;
  }
  else  {
    return 0;
  }

}
