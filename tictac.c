/* Brandon Lim. TicTacToe */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char matrix[3][3]; //Creates a 3 by 3 2d array
int end = 0; //Counter for when someone has won
int counter = 0; //Counter for number of turns to determine a draw.
char input; //User's input for X or O

void startGame(); //Declares all the functions that I use later on
void display();
void p1();
void p2();
char check();


//==============================================================================


int main() {

  char re;

  startGame(); //Sets up the game

  while (end == 0) { //Runs a loop until the game ends (When someone wins or its a tie)
    display(); //Refreshes the display
    p1(); //Allows player 1's input

    if(counter == 9) { //Whenever 9 moves have been made, it breaks out of the while loop
      break;
    }

    char result = check(); //Runs a check to see if anyone has won, and sets the char of check() to equal result

    if(result != ' '){ //Compares the char in result and sees if it is empty, if not then it breaks out of the while loop
      break;
    }

    display(); //Same as above but for player 2
    p2();
    counter++;

    if(counter == 9) { //Whenever 9 moves have been made, it breaks out of the while loop
      break;
    }
    result = check();

    if(result != ' '){

      break;

    }
  }

  char ans  = check(); //Makes check a new variable

  if(ans == 'X') { //Checks if player 1 has won

    display(); //Shows the board so that they can see where they have won

    printf("Player 1 (X) won!\n\n");
  }
  else if(ans == 'O') { //Checks if p2 has won

    display();

    printf("Player 2 (O) won!\n\n");
  }

  else {
    printf("Its a Tie Game! Want to restart(y/n)?\n"); //If its tie, then it just prints that
    scanf("%c", &re);
    scanf("%c", &re);
    if (re == 'y') {
      main();
    }
    }

    printf("Thanks for playing!\n");
    return 0;
}


//==============================================================================


void startGame() { //Initializes the game

  int i, j;
  for(i = 0; i < 3; i++) { //Nested forloop
    for(j = 0; j < 3; j++) {
      matrix[i][j] = ' '; //Goes through every sequence in the 2d array and sets its value to a space ( )
    }
  }

}


//==============================================================================


void display() { //Prints out the display

  int i;

  system("clear"); //Like typing "clear" in the console, looks like the screen is constantly being refreshed so that it is not cluttered

  for(i = 0; i < 3; i++) {
    printf(" %c | %c | %c ", matrix[i][0], matrix[i][1], matrix[i][2]); //Prints out the grid in spaces, and inputs the characters in the spots in the array
    if(i != 2)
      printf("\n---|---|---\n"); //This prints the horizontal lines, and only prints 2 of them.
  }
  printf("\n\n"); //Spacing for input
}


//==============================================================================


void p1() { //P1's move

  int x,y;

  printf("Enter in P1's(X) cords(row column): ");
  scanf("%d %d", &x, &y); //sets the x-y values of the input

  x--; //Minuses them off by 1 because if they input "3", it will be 2 on the array
  y--;

  if(matrix[x][y] != ' '){ //Checks if the value that they input already contains a marker
    printf("Invalid entry, try again.\n");
    p1(); //Reruns this same function again
  }
  else {
    matrix[x][y] = 'X';  } //Else, inputs X into that matrix spot
    counter++;
}


//==============================================================================


void p2() { //Same as P1, but for another player

  int x,y;

  printf("Enter in P2's(O) cords(row, column): ");
  scanf("%d %d", &x, &y);

  x--;
  y--;

  if(matrix[x][y] != ' '){
    printf("Invalid entry, try again.\n");
    p2();
  }
  else {
    matrix[x][y] = 'O';
    counter++;
  }
}

//==============================================================================

void cpu() {

  srand(time(NULL));

//================HORIZONTAL CHECK=============================================

  for(int i = 0; i < 3; i++) {
      if(matrix[i][0] == 'O' && matrix[i][1] == 'O' && matrix[i][2] == ' '){
        matrix[i][2] = 'O';
        counter++;
      }

      if(matrix[i][0] == 'O' && matrix[i][2] == 'O' && matrix[i][1] == ' '){
        matrix[i][1] = 'O';
        counter++;
      }

      if(matrix[i][1] == 'O' && matrix[i][2] == 'O' && matrix[i][0] == ' '){
        matrix[i][0] = 'O';
        counter++;
      }
  }

//===============VERTICAL CHECK=================================================

  for(int j = 0; j < 3; j++) {
    if(matrix[0][j] == 'O' && matrix[1][j] == 'O' && matrix[2][j] == ' '){
      matrix[2][j] = 'O';
      counter++;
    }

    if(matrix[1][j] == 'O' && matrix[2][j] == 'O' && matrix[0][j] == ' '){
      matrix[0][j] = 'O';
      counter++;
    }

    if(matrix[0][j] == 'O' && matrix[2][j] == 'O' && matrix[1][j] == ' '){
      matrix[1][j] = 'O';
      counter++;
    }
  }

//=============DIAG CHECK=======================================================

  if(matrix[0][0] == 'O' && matrix[1][1] == 'O' && matrix[2][2] == ' ') {
    matrix[2][2] = 'O';
    counter++;
  }

  if(matrix[0][0] == 'O' && matrix[2][2] == 'O' && matrix[1][1] == ' ') {
    matrix[1][1] = 'O';
    counter++;
  }

  if(matrix[2][2] == 'O' && matrix[1][1] == 'O' && matrix[0][0] == ' ') {
    matrix[0][0] = 'O';
    counter++;
  }


  if(matrix[0][2] == 'O' && matrix[1][1] == 'O' && matrix[2][0] == ' ') {
    matrix[2][0] = 'O';
    counter++;
  }

  if(matrix[0][2] == 'O' && matrix[2][0] == 'O' && matrix[1][1] == ' ') {
    matrix[1][1] = 'O';
    counter++;
  }

  if(matrix[2][0] == 'O' && matrix[1][1] == 'O' && matrix[0][2] == ' ') {
    matrix[0][2] = 'O';
    counter++;
  }
}


//==============================================================================


char check() { //Checks to see if they have won

  int i;

  for(i = 0; i < 3; i++) //Forloop to go through each row
    if(matrix[i][0] == matrix[i][1] &&
      matrix[i][0] == matrix[i][2]) //Checks if the rows have the same char in all.
      return matrix[i][0]; //If so, then it will return the letter that has all 3 in a row, thus giving a winner


  for(i = 0; i < 3; i++)
    if(matrix[0][i] == matrix[1][i] &&
      matrix[0][i] == matrix[2][i]) //Same as before but checks it vertically
      return matrix[0][i];

      //Testing Diagonals
  if(matrix[0][0] == matrix[1][1] &&
    matrix[1][1] == matrix[2][2])
    return matrix[0][0];

  if(matrix[0][2] == matrix[1][1] &&
    matrix[1][1] == matrix[2][0])
    return matrix[0][2];


    return ' '; //If everything else doesnt work, then it returns nothing, meaning the game goes on.

}
