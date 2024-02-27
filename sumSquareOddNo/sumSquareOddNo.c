// This program calculates the sum of the squares of the first n odd numbers.

#include <stdio.h>

int main() {
   int n, i, sum = 0;

   // Read the value of n from the user
   scanf("%d", &n);

   // Calculate the sum of the squares of the first n odd numbers
   for (i = 1; i <= n; i++) {
      sum += (2 * i - 1) * (2 * i - 1);
   }

   // Print the result
   printf("Sum of square of first %d odd numbers: %d", n, sum);

   return 0;
}