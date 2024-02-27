// This program calculates the sum of the digits of a given number.

#include <stdio.h>

int main()
{
    int n, sum = 0, m;

    // Read the input number from the user
    scanf("%d", &n);

    // Calculate the sum of the digits
    while (n > 0)
    {
        m = n % 10;
        sum = sum + m;
        n = n / 10;
    }

    // Print the sum of the digits
    printf("%d", sum);

    return 0;
}