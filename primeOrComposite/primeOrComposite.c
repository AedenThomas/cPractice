// This program checks whether a given number is prime or composite.
// It prompts the user to enter a number, reads the input, and then
// iterates from 2 to half of the input number to check if it is divisible
// by any number in that range. If it is divisible, it prints that the number
// is composite. If it is not divisible by any number, it prints that the number
// is prime.

#include<stdio.h>

int main()
{
    int i, n, flag = 0;

    printf("Enter a number"); // Prompt the user to enter a number
    scanf("%d", &n); // Read the input number from the user

    for (i = 2; i <= n/2; i++) // Iterate from 2 to half of the input number
    {
        if (n % i == 0) // Check if the number is divisible by i
        {
            printf("The number is Composite"); // If divisible, print that the number is composite
            flag = 1; // Set the flag to indicate that the number is composite
        }
    }

    if (flag == 0) // If the flag is still 0, it means the number is not divisible by any number from 2 to n/2
    {
        printf("The number is Prime"); // Print that the number is prime
    }

    printf("\n"); // Print a new line

    return 0;
}
