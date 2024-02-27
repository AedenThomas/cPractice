// Distance between 2 points
#include<stdio.h>
#include<math.h>

int main ()
{
  float x1, y1, x2, y2, distance;

  // Input the coordinates of the first point
  scanf ("%f %f", &x1, &y1);

  // Input the coordinates of the second point
  scanf ("%f %f", &x2, &y2);

  // Calculate the distance between the two points
  distance = sqrt ((x2-x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));

  // Print the calculated distance
  printf ("the distance is = %0.2f", distance);

  return 0;
}
