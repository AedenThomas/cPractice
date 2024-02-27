#include <stdio.h>
int main()
{
    int n;
    printf("How many lines? ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf(" ");
        for (int j = 0; j < n; j++)
        {
            printf("@");
        }
        printf("\n");
    }
    return 0;
}