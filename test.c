/* Brandon Lim. Space Invaders game.*/

#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <stdlib.h>

char board[30][30];
int end = 0;

void setup();
void display();
void move();
void enemy();
void down();
void down2();

int main() {

  setup();

  do {

    display();
    move();
    enemy();
    sleep(1);


    display();
    down();
    sleep(1);

    display();
    down2();
    sleep(1);

    display();
    down2();
    sleep(1);

    display();
    down2();
    sleep(1);

    display();
    down2();
    sleep(1);

    display();
    down2();
    sleep(1);

    display();
    down2();
    sleep(1);


  } while(end == 0);

  return 0;

}

// =============================================================================

void setup() {

  int i, j;

  for(i = 0; i < 30; i++)
  {
    for(j =0; j < 30; j++)
    {
      board[i][j] = ' ';
    }
  }

  for(i = 0; i < 5; i++)
  {
    for(j = 0; j < 20; j=j+2)
    {
      board[i][j + 5] = 'O';
    }
  }

}

// =============================================================================

void move() {

  int i, j;
  for(i = 0; i < 30; i++) {
    for(j = 30; j > 0; j--) {
      if(board[i][j] == 'O' && board[i][j+1] == ' ')
        board[i][j+1] = board[i][j];
        board[i][j] = ' ';
      }
    }
}

// =============================================================================

void display() {

  int i, j;
  system("clear");
  for(i = 0; i < 30; i++) {
    for(j =0; j < 30; j++) {
      printf("%c", board[i][j]);
    }
    printf("\n");
  }

}



void enemy() {

  int i, j, r;

  srand(time(NULL));

  for(j = 0; j < 30; j++)
  {

    for(i = 0; i < 30; i++)
    {

      r = rand() % 3 + 1;

      if(board[i][j] == 'O' && board[i+1][j] == ' ')
      {

        if(r > 2)
        {
          board[i+1][j] = 'U';
        }

      }


    }

  }
}


void down() {

  int i, j;


  for(j = 0; j < 30; j++)
  {

    for(i = 0; i < 30; i++)
    {


      if(board[i][j] == 'U' && board[i+1][j]==' ' && board[i-1][j] == 'O')
      {

        board[i+1][j] = 'U';
        board[i][j] = ' ';

      }


    }
  }
}

void down2() {

  int i, j;


  for(j = 0; j < 30; j++)
  {

    for(i = 0; i < 30; i++)
    {


      if(board[i][j] == 'U' && board[i+1][j] == ' ' && board[i-1][j] == ' ')
      {

        board[i+1][j] = 'U';
        board[i][j] = ' ';
        break;

      }


    }
  }
}
