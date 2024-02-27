#include <stdio.h>
int main()
{
    float negativeSum = 0.0, positiveSum = 0.0, positiveAvg = 0.0, negativeAvg = 0.0;
    int n, positive = 0, negative = 0;
    printf("Enter -1 to exit\n\n");
    do
    {
        printf("Enter the number: ");
        scanf("%d", &n);
        if (n > 0)
        {
            positiveSum = positiveSum + n;
            positive++;
            positiveAvg = (positiveSum / positive);
        }
        else if (n < -1)
        {
            negativeSum = negativeSum + n;
            negative++;
            negativeAvg = (negativeSum / negative);
        }
    } while (n != -1);

    printf("\n Sum of all positive numbers is %0.0f and their mean is %0.2f", positiveSum, positiveAvg);
    printf("\n Sum of all negative numbers is %0.0f and their mean is %0.2f", negativeSum, negativeAvg);
    printf("\n");
    return 0;
}