#include <stdio.h>
int main()
{
    int temp, a[9] = {1, 1, 2, 2, 3, 3, 4, 5, 5}, counter = 0;
    for (int i = 0; i < 9; i++)
    {
        temp = a[i];
        for (int j = 0; j < 9; j++)
        {
            if (a[j] == temp)
                counter++;
        }
        if (counter ==1)
        {
            printf("the number is %d\n", temp);
            break;
        }
    }
    return 0;
}