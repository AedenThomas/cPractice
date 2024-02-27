// This program converts time given in hours and minutes to minutes.

#include <stdio.h>

// Function to input hours from the user
int inputHours()
{
    int hours;
    printf("Enter the hours ");
    scanf("%d", &hours);
    return hours;
}

// Function to input minutes from the user
int inputMin()
{
    int min;
    printf("Enter the minutes ");
    scanf("%d", &min);
    return min;
}

// Function to calculate the total minutes
int calculate(int h, int m)
{
    int min;
    min = h * 60 + m;
    return min;
}

// Function to output the converted time in minutes
void output(int min)
{
    printf("Converted time to minutes is: %d", min);
    printf("\n");
}

// Main function
int main()
{
    int h, m;
    h = inputHours();
    m = inputMin();
    output(calculate(h, m));

    return 0;
}
