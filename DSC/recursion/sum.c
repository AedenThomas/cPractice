// Write C program to find the sum of digits of a number using recursion.
#include<stdio.h>
int sum(int n)
{
    if(n==0)
        return 0;
    else
        return n%10+sum(n/10);
}
int main()
{
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    printf("Sum of digits of %d is %d",n,sum(n));
    return 0;
}