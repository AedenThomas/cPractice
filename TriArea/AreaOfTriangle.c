// This program calculates the area of a triangle given the lengths of its sides.

#include<stdio.h>
#include<math.h>

int main ()
{
  float a, b, c, s, area;

  // Prompt the user to enter the sides of the triangle
  printf ("Enter the sides of the triangle\n");

  // Read the input values for the sides of the triangle
  scanf ("%f %f %f", &a, &b, &c);

  // Calculate the semi-perimeter of the triangle
  s = (a + b + c) / 2;

  // Calculate the area of the triangle using Heron's formula
  area = sqrt (s * (s - a)*(s - b) *(s - c));

  // Display the calculated area of the triangle
  printf ("Area of the triangle is = %0.2f", area);
  printf("\n");

  return 0;
}
