// This program checks if a given integer is a palindrome.
// A palindrome is a number that remains the same when its digits are reversed.

#include <stdio.h>

int main()
{
    int n, rev = 0, rem, temp;

    printf("Enter an integer: ");
    scanf("%d", &n);
    temp = n;

    // Reversing the number
    while (n != 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }

    // Checking if the number is a palindrome
    if (temp == rev)
        printf("%d is a palindrome.", temp);
    else
        printf("%d is not a palindrome.", temp);

    printf("\n");
    return 0;
}