#include <stdio.h>

int main()
{
    int m, n, max = 0, i = 0, j = 0;
    m = 5;
    n = 3;
    int arr[m][n];

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (i = 0; i < n; i++)
    {
        int max = arr[0][i];
        for (j = 1; j < m; j++)
        {
            if (arr[j][i] > max)
            {
                max = arr[j][i];
            }
        }
        printf("The highest marks obtained in the subject %d=%d\n", i + 1, max);
    }
}