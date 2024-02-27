#include <stdio.h>

int main()

{

    int m;

    for (m = 11; m <= 16; m++)

    {

        if (m == 14)

        {

            continue;
        }
        printf("%d ", m);
    }

}