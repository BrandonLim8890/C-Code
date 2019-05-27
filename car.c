//Brandon Lim. Cars.

#include <stdio.h>
#include <string.h>

struct car {

  char model[50];
  float expenses;
  float price;
  int quantity;

};

void printcar(struct car cars);

int main() {

  struct car mercedes, volkswagen, audi, bmw;

  strcpy(mercedes.model, "C-Class");
  mercedes.expenses = 5200;
  mercedes.price = 39500 * 1.2;
  mercedes.quantity = 1;

  strcpy(volkswagen.model, "Golf");
  volkswagen.expenses = 100;
  volkswagen.price = 19895;
  volkswagen.quantity = 3;

  strcpy(audi.model, "A8");
  audi.expenses = 1000;
  audi.price = 82500;
  audi.quantity = 2;

  strcpy(bmw.model, "i8");
  bmw.expenses = 1500;
  bmw.price = 143400;
  bmw.quantity = 2;

  printcar(mercedes);
  printcar(volkswagen);
  printcar(audi);
  printcar(bmw);

  return 0;

}

void printcar(struct car cars) {

  if ((cars.price * cars.quantity) > 10000) {
    if(strcmp(cars.model, "C-Class") == 0 && cars.expenses > 5000){

      printf("Model: %s\n", cars.model);
      printf("Expenses: %.2f\n", cars.expenses);
      printf("Price: %.2f\n", cars.price);
      printf("Quantity: %d\n\n", cars.quantity);
    }

  }

}
