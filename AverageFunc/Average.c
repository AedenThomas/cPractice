// Average using functions

#include <stdio.h>

// Function to take input from the user
int input()
{
	int a;
	scanf("%d", &a);
	return a;
}

// Function to calculate the average of three numbers
float calculate(float n1, float n2, float n3)
{
	float average;
	average = (n1 + n2 + n3) / 3;
	return average;
}

// Function to display the average
float output(float average)
{
	printf("%0.2f", average);
	printf("\n");
	return average;
}

// Main function
int main()
{
	int n1, n2, n3;
	float avg;

	// Take input from the user
	n1 = input();
	n2 = input();
	n3 = input();

	// Calculate and display the average
	output(calculate(n1, n2, n3));
}