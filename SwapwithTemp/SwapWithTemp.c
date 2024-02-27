// This program swaps the values of two integers using a temporary variable.

#include <stdio.h>

int main()
{
    int a, b, temp; // Declare variables for two integers and a temporary variable
    
    printf("Enter two integers "); // Prompt the user to enter two integers
    scanf("%d%d", &a, &b); // Read the values of the two integers from the user
    
    temp = a; // Store the value of 'a' in 'temp'
    a = b; // Assign the value of 'b' to 'a'
    b = temp; // Assign the value of 'temp' to 'b'
    
    printf("After Swapping\nFirst variable = %d\nSecond variable = %d", a, b); // Print the swapped values of the two integers
    printf("\n");
    
    return 0; // Return 0 to indicate successful execution of the program
}
