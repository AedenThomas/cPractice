#include <stdio.h>
int main()
{
    char ch = 'A';
    for (int i = 1; i <= 3; i++) //number of lines
    {

        for (int j = 1; j <= 3; j++)    //number of characters in a line
        {
            printf("%c", ch);
        }
        ch += 1;
        
        printf("\n");

        if (ch=='C')       //printing space if ch is "C"
        {
            for (int k = 1; k <= 3; k++)
            {
                printf(" ");
            }
        }
    }
    printf("\n");
    return 0;
}