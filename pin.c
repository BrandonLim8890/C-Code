#include <stdio.h>

int main() {

	int pin = 1234;
	int user;
	
	printf("====================\n");
	printf("Welcome to the bank of columbia\n");
	printf("====================\n");
	
	printf("Enter the PIN: ");
	scanf("%d", &user);
	
	while(user != pin){
	
		printf("Wrong PIN, try again: \n");
		printf("Enter the PIN: ");
		scanf("%d", &user);
		
	}
	
	printf("Correct PIN!\n");
	
	return 0;
}