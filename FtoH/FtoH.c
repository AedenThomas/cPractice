#include<stdio.h>
#include<math.h>

int main () {
  float fahrenheit, celsius;

  // Prompt user to enter temperature in Fahrenheit
  printf ("Enter the temperature in Fahrenheit \n");

  // Read temperature input from user
  scanf ("%f", &fahrenheit);

  // Convert Fahrenheit to Celsius
  celsius = 0.56 * (fahrenheit - 32);

  // Display the temperature in Celsius
  printf ("Temperature in Celsius is = %0.2f", celsius);

  return 0;
}
