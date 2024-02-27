// This program finds the smallest number among three given numbers.

#include <stdio.h>

int main()
{
	int num1, num2, num3;

	// Prompt the user to enter three numbers
	printf("Enter three numbers: ");
	scanf("%d %d %d", &num1, &num2, &num3);

	// Find the smallest number using ternary operator
	(num1 < num2 && num1 < num3) ? printf("Smallest number: %d", num1)
								: (num2 < num3) ? printf("Smallest number: %d", num2)
											   : printf("Smallest number: %d", num3);

	printf("\n");
	return 0;
}
