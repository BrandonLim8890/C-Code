//Brandon Lim. TicTacToe

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char matrix[3][3];

void initdisplay();
void display();
char check();
void getcomputer();
void getplayer();

int main() {

  char done = ' ';

  initdisplay();


  do {

      display();
      getplayer();
      check();
      done = check();
      if (done != ' ') { //Player wins
        break;
      }
      getcomputer();
      done = check();
      if(done != ' ') { //Computer wins
        break;
      }
  } while(done == ' ');

  if(done == 'X'){
    printf("You won!");
  }
  else {
    printf("I won!");
  }

  return 0;
}

void display() {

  int i;

  for(i = 0; i < 3; i++){
    printf(" %c | %c | %c  ", matrix[i][0], matrix[i][2], matrix[i][3]);
    if(i != 2){
      printf("\n---|---|---\n");
    }
  }
}

void initdisplay() {

  int i, j;

  for(i = 0; i < 3; i++) {

    for(j = 0; j < 3; j++) {

      matrix[i][j] = ' ';
    }
  }
}

void getplayer() {

  int x,y;

  printf("Enter the X and Y coordinates for your input (x, y): ");
  scanf("%d, %d", &x, &y);

  x = x-1;
  y = y-1;

  if(matrix[x][y] != ' ') {

    printf("Invalid move. Try again\n");
    getplayer();

  }
  else {
    matrix[x][y] = 'X';
  }

}

void getcomputer() {

  int i, j;

  for(i = 0; i < 3; i++){
    for(j = 0; j < 3; j++){
      if(matrix[i][j] == ' '){
        break;
      }
    }
    if(matrix[i][j] == ' '){
      break;
    }
  }
    matrix[i][j] = 'O';
}

char check() {

  int i;

  for(i = 0; i < 3; i++) {
    if(matrix[i][0] == matrix[i][1] && matrix[i][0] == matrix[i][2]) {
      return matrix[i][0];
    }
  }

  for(i = 0; i < 3; i++) {
    if(matrix[0][i] == matrix[1][i] && matrix[0][i] == matrix[2][i]){
      return matrix[0][i];
    }
  }

  if(matrix[0][0] == matrix[1][1] && matrix[1][1] == matrix[2][2]){
    return matrix[1][1];
  }

  else if(matrix[0][2] == matrix[1][1] && matrix[1][1] == matrix[2][0]){
    return matrix[1][1];
  }

  else {
    return ' ';

}
