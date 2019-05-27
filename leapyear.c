/* Brandon Lim. Leap year */

#include <stdio.h>
#include <math.h>

int main (){

	int month;
	int date;
	int year;
	
	printf("Enter month: ");
	scanf("%d", &month);
	printf("Etner day: ");
	scanf("%d", &date);
	printf("Enter year: ");
	scanf("%d", &year);
	
	if ((1 <= date && date <= 31) && (1 <= month && month <= 12) && (1000 <= year && year <= 9999))
	{
		if ((month % 2 == 0 && date <= 30) || month % 2 == 1)
		{
		
			if (year % 400 == 0)
			{
				printf("\n%d/%d/%d falls on a leap year.\n\n", date, month, year);
			}
			else if(year % 100 == 0)
			{
				printf("\n%d/%d/%d does not fall on a leap year.\n\n", date, month, year);
			}
			else if(year % 4 == 0)
			{
				printf("\n%d/%d/%d falls on a leap year.\n\n", date, month, year);
			}
			
		}
		else
		{
			printf("\nInvalid entry\n\n");
		}
	}
	else
	{
	printf("\nInvalid entry\n\n");
	}
	
	return 0;

}