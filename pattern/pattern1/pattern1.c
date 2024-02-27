// Pattern:

//      1
//     12
//    123
//   1234
//  12345

#include <stdio.h>
int main()
{
    int n, count = 1;
    printf("How many lines? ");
    scanf("%d", &n);

    for (int i = n; i >= 1; i--) //printing new line
    {
        printf("\n");
        for (int j = 1; j <= i; j++)
        {
            printf(" "); //printing spa
        }
        for (int k = 1; k <= count; k++)
        {
            printf("%d", k);
        }
        count++;
        
    }
    printf("\n");
    return 0;
}