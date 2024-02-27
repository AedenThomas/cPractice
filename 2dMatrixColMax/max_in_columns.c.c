#include <stdio.h>

int main()
{
    int m, n, max = 0, i = 0, j = 0;
    m = 5; // number of rows
    n = 3; // number of columns
    int arr[m][n]; // 2D array to store the matrix

    // Input the matrix elements
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    // Find the maximum element in each column
    for (i = 0; i < n; i++)
    {
        int max = arr[0][i]; // assume the first element as maximum
        for (j = 1; j < m; j++)
        {
            if (arr[j][i] > max)
            {
                max = arr[j][i]; // update the maximum if a larger element is found
            }
        }
        printf("The highest marks obtained in the subject %d = %d\n", i + 1, max);
    }
}