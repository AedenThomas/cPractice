// This program demonstrates swapping two numbers using pointers.

#include <stdio.h>

// Function to swap two numbers using pointers
void swap(int *a, int *b){
   int temp=0;
   temp=*a;
   *a=*b;
   *b=temp;
}

int main()
{
   int a,b;
   
   // Input two numbers from the user
   scanf("%d %d", &a, &b);
   
   // Call the swap function to swap the numbers
   swap(&a, &b);
   
   // Print the swapped numbers
   printf("%d %d", a, b);
}
