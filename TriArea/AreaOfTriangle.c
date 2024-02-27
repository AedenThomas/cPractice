#include<stdio.h>
#include<math.h>

int main ()
{
  float a, b, c, s, area;
  printf ("Enter the sides of the traingle\n");
  scanf ("%f %f %f", &a, &b, &c);
  s = (a + b + c) / 2;
  area = sqrt (s * (s - a)*(s - b) *(s - c));
  printf ("Area of the triangle is = %0.2f", area);
  printf("\n");
  return 0;
}
