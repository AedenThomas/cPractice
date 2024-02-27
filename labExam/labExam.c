// Program to concatenate strings and show its length

#include <stdio.h>

int main()
{
    char str1[50], str2[50], i, j;

    // Input first string
    printf("Enter first string: ");
    scanf("%s", str1);

    // Input second string
    printf("Enter second string: ");
    scanf("%s", str2);

    // Find the length of the first string
    for (i = 0; str1[i] != '\0'; i++)
        ;

    // Concatenate the second string to the first string
    for (j = 0; str2[j] != '\0'; j++, i++)
    {
        str1[i] = str2[j];
    }

    // Add null character at the end to terminate the concatenated string
    str1[i] = '\0';

    // Print the concatenated string
    printf("The concatenated string is %s\n", str1);

    // Print the length of the concatenated string
    printf("The length of the concatenated string is %d\n", i);
}
