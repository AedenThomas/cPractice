#include<stdio.h>
#include<math.h>

int
main ()
{
  float fahrenheit, celsius;
  printf ("Enter the temperature in  Fahrenheit \n");
  scanf ("%f", &fahrenheit);
  celsius = 0.56 * (fahrenheit - 32);
  printf ("Temperature in Celsius is = %0.2f", celsius);
  return 0;
}
