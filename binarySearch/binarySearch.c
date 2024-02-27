#include <stdio.h>

int main()
{
    int i, first, last, middle, n, searchNum;
    printf("Enter number of elements:\n");
    scanf("%d", &n);
    int A[n];

    printf("Enter the elements:\n");

    for (i = 0; i < n; i++)
        scanf("%d", &A[i]);

    printf("Enter the value to find:\n");
    scanf("%d", &searchNum);

    first = 0;
    last = n - 1;
    middle = (first + last) / 2;

    while (first <= last)
    {
        if (A[middle] < searchNum) //desired element is in 2nd half of array
            first = middle + 1; 
        else if (A[middle] == searchNum)    //desired element is/becomes the middle element
        {
            printf("It is present at index %d.\n", middle + 1);
            break;
        }
        else
            last = middle - 1;  //desired element is in 1st half of array
        middle = (first + last) / 2;
    }
    if (first > last)
        printf("Not found");
    return 0;
}