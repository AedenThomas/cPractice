#include <stdio.h>

int inputHours()
{
    int hours;
    printf("Enter the hours ");
    scanf("%d", &hours);
    return hours;
}

int inputMin()
{
    int min;
    printf("Enter the minutes ");
    scanf("%d", &min);
    return min;
}

int calculate(int h, int m)
{
    int min;
    min = h * 60 + m;
    return min;

}

void output(int min)
{
    printf("Converted time to minutes is: %d", min);
    printf("\n");
}
int main()
{
    int h, m;
    h = inputHours();
    m = inputMin();
    output(calculate(h, m));

    return 0;
}
