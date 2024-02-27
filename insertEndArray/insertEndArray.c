#include <stdio.h>
 
int main()
{
   int position, i, n, value;
   printf("Enter number of elements in array\n");
   scanf("%d", &n);
   int array[n];
 
   printf("Enter the elements\n");
 
   for (i = 0; i < n; i++)
      scanf("%d", &array[i]);
 
   printf("Enter the value to insert at last position\n");
   scanf("%d", &value);
 
  array[n] = value;
 
   printf("Resultant array is\n");
 
   for (i = 0; i <= n; i++)
      printf("%d\n", array[i]);
 
   return 0;
}