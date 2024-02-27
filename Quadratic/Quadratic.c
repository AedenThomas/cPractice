// This program calculates the roots of a quadratic equation
// given the coefficients a, b, and c.

#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c, d;
    float root1, root2;

    printf("Enter a, b and c ");
    scanf("%d%d%d", &a, &b, &c);

    d = b * b - 4 * a * c;

    if (d > 0)
    {
        // Calculate and print the two real roots
        root1 = (-b + sqrt(d)) / (2 * a);
        root2 = (-b - sqrt(d)) / (2 * a);
        printf("Root1 = %.2f and Root2 = %.2f \n", root1, root2);
    }
    else if (d == 0)
    {
        // Calculate and print the repeated root
        root2 = -b / (2 * a);
        root1 = root2;
        printf("Root1 = Root2 = %.2f \n", root1);
    }
    else
    {
        // Print a message for imaginary roots
        printf("Roots are imaginary");
    }

    printf("\n");
    return 0;
}
