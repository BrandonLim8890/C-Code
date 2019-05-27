//Brandon Lim. Books

#include <stdio.h>
#include <string.h>

struct Books {

  char title[50];
  char author[50];
  char subject[100];
  int id;

};

struct Customers {

  char firstname[20];
  char lastname[20];
  int customerid;
  char bday[20];
  char checkoutrecords[50];

};

int multiple (int x, int y);

int main() {

  struct Books myfav1;
  struct Books myfav2;
  struct Customers Zack;

  strcpy(myfav1.title, "Harry Potter");
  strcpy(myfav1.author, "J. K. Rowling");
  myfav1.id = 857;

  strcpy(myfav2.title, "All my friends are dead");
  strcpy(myfav2.author, "Avary Monsen and Jary John");
  myfav2.id = 858;

  printf("Book 1 title: %s\n", myfav1.title);
  printf("Book 1 author:  %s\n", myfav1.author);
  printf("Book 1 id: %d\n", myfav1.id);

  return 0;

}

int multiple(int x, int y) {

  return x * y;

}
