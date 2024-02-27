#include <stdio.h>

int main()
{
    int a, b, c, big ;

    // Prompt the user to enter three numbers
    printf("Enter three numbers : ") ;

    // Read the three numbers from the user
    scanf("%d %d %d", &a, &b, &c) ;

    // Find the biggest number among the three using ternary operator
    big = a > b ? (a > c ? a : c) : (b > c ? b : c) ;

    // Print the biggest number
    printf("\nThe biggest number is : %d", big) ;
    printf("\n");
    return 0;
}
