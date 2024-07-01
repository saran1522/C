#include <stdio.h>

int main() 
{
	float rupees;

	printf("Please enter rupees: ");
	scanf("%f", &rupees);

	float dollars = rupees /  72.55;
    
	// printf("amount in dollars is %f: ", rupees/72.55)
	printf("%f Dollars", dollars);
	 
	 
}