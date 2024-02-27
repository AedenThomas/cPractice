#include<stdio.h>
int
main ()
{
  float radius, area, c;
  printf ("\nEnter the radius of Circle : ");
  scanf ("%f", &radius);
  area = 3.14 * radius * radius;
  c = 2 * 3.14 * radius;
  printf ("\nArea of Circle : %0.2f", area);
  printf ("\nCircumference of circle: %0.2f", c);
  return (0);
}
