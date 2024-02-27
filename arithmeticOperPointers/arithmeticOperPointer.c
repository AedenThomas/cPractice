#include<stdio.h>
int main()
{
   int first, second, *p, *q, sum, diff, prod, rem;
   float div;


   scanf("%d%d", &first, &second);

   p = &first;
   q = &second;

   sum = *p + *q;
   diff=*p - *q;
   prod=*p * *q;
   div=*p / *q;
   rem=*p % *q;

   printf("Sum of 2 numbers= %d\n", sum);
   printf("Difference of 2 numbers= %d\n", diff);
   printf("Product of 2 numbers= %d\n", prod);
   printf("Division= %0.2f\n", div);
   printf("Remainder= %d\n", rem);

   return 0;
}