#include <stdio.h>

int main()
{
    int position, i, n;

    // Prompt user to enter the number of elements in the array
    printf("Enter number of elements in array\n");
    scanf("%d", &n);

    // Declare an array of size n
    int A[n];

    // Prompt user to enter the elements of the array
    printf("Enter the elements\n");
    for (i = 0; i < n; i++)
        scanf("%d", &A[i]);

    // Prompt user to enter the location of the element to be deleted
    printf("Enter the location of the element to be deleted (consider index of array starts from 1) \n");
    scanf("%d", &position);

    // Delete the element at the specified position
    // position-1 indicates the index of the array according to the computer
    for (i = position - 1; i < n - 1; i++) // pulling elements from right towards left
        A[i] = A[i + 1];

    // Print the resultant array
    printf("Resultant Array:\n");
    for (i = 0; i < n - 1; i++)
        printf("%d\n", A[i]);

    return 0;
}