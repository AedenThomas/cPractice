//Distance between 2 points
#include<stdio.h>
#include<math.h>

int main ()
{
  float x1, y1, x2, y2, distance;

  scanf ("%f %f", &x1, &y1);

  scanf ("%f %f", &x2, &y2);
  distance = sqrt ((x2-x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));
  printf ("the distance is = %0.2f", distance);
  return 0;
}
