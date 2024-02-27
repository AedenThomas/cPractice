// This program calculates the total marks and average of four subjects,
// and assigns a grade based on the average.

#include <stdio.h>
#include <math.h>

// Function to take input for marks
int input()
{
    int marks;
    printf("Enter marks obtained ");
    scanf("%d", &marks);
    return marks;
}

int main()
{
    int a, b, c, d;
    a = input();
    b = input();
    c = input();
    d = input();
    int total = a + b + c + d;
    printf("Total marks is %d out of 100", total);
    int average = total / 4;
    printf("\nAverage is %d \n", average);
    if (average <= 100 && average > 90)
    {
        printf("Student got A grade");
    }
    else if (average <= 90 && average > 80)
    {
        printf("Student got B grade");
    }
    else if (average <= 80 && average > 60)
    {
        printf("Student got C grade");
    }
    else if (average <= 60 && average > 40)
    {
        printf("Student got D grade");
    }
    else
    {
        printf("Fail");
    }
    printf("\n");
}
