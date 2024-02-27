#include<stdio.h>

int main()
{
	int m, n, i;

	// Prompt the user to enter the value of m
	printf("Enter m:");
	scanf("%d", &m);

	// Prompt the user to enter the value of n
	printf("Enter n:");
	scanf("%d", &n);

	// Iterate from m to n
	for (i = m; i <= n; i++)
	{
		// Check if the current number is even
		if (i % 2 == 0)
		{
			// Print the even number
			printf("%d \n", i);
		}
	}

	return 0;
}
