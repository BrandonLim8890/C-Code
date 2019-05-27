/* Brandon Lim */

#include <stdio.h>
#include <math.h>


int main() {

	char living;

	int rides;
	float day;
	int savings;
	int singlefare;

	int monthcost = 121;
	int unlimweek = 32;
	double weekcost;


	printf("Do you live in New York or are you Visint? V/L: ");
	scanf("%c", &living);

	if(living == 'L' || living == 'l') {

		printf("How many times do you ride the train a week?\n");
		scanf("%d", &rides);

		singlefare = (4 * rides * 3);

		printf("Monthly cost for buying single tickets: $%d\n", singlefare);
		printf("Monthly cost for 30 day unlimited card: $%d\n", monthcost);

		if (singlefare > monthcost) {

			savings = singlefare - monthcost;

			printf("\nYou would save $%d by buying a singlefare ride everyday if you rode the train %d times a week.\n\n", savings, rides);

		}
		else if (singlefare < monthcost) {

			savings = monthcost - singlefare;

			printf("\nYou would save $%d by buying a 30 day unlimited card if you rode the train %d times a week.\n\n", savings, rides);

		}
		else if (singlefare == monthcost) {
			savings = 0;

			printf("You wouldn't save anything going either way.\n");

		}

	}
	else if (living == 'V' || living == 'v') {

		printf("How many times do you ride the train a day?\n");
		scanf("%d", &rides);
		printf("How long do you plan on visiting in days?\n");
		scanf("%f", &day);

		singlefare = (rides * day * 3);
		weekcost = round(day / 7 + 0.5) * unlimweek;

		printf("It would cost you a total of $%d for your travel expenditures if you bought singlefare rides.\n", singlefare);
		printf("It would cost you $%d if you bought a 30 day unlimited card.\n", monthcost);
		printf("It would cost you $%.2f if you bought a 7 day unlimited card\n", weekcost);

	}
	else {

		printf("Invalid entry.\n");

	}

return 0;

}
