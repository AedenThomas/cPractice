#include <stdio.h>
int main()
{

    int position, i, n;
    printf("Enter number of elements in array\n");
    scanf("%d", &n);
    int A[n];

    printf("Enter the elements\n");

    for (i = 0; i < n; i++)
        scanf("%d", &A[i]);

    printf("Enter the location of the element to be deleted (consider index of array starts from 1) \n");
    scanf("%d", &position);

    //position-1 indicates the index of the array according to the computer
    for (i = position - 1; i < n - 1; i++) //pulling elements from right towards left
        A[i] = A[i + 1];

    printf("Resultant Array:\n");

    for (i = 0; i < n - 1; i++)
        printf("%d\n", A[i]);

    return 0;
}