#include <stdio.h>

int main()
{

    int position, i, n, value;

    printf("Enter number of elements in the array: ");
    scanf("%d", &n);
    int A[n];
    printf("Enter the elements\n");

    for (i = 0; i < n; i++)
        scanf("%d", &A[i]);

    printf("Enter nth position to insert the element (consider array index starts from 1) \n");
    scanf("%d", &position);

    printf("Enter the value to be inserted\n");
    scanf("%d", &value);

    // (position-1) indicates the index position according to array/computer
    for (i = n - 1; i >= position - 1; i--) //shifting existing elements to the right
        A[i + 1] = A[i];

    A[position - 1] = value; //assigning new element to array in nth position

    printf("\nResultant array is\n");

    for (i = 0; i <= n; i++)
        printf("%d\n", A[i]);

    return 0;
}