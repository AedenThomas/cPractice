#include<stdio.h>

void input(int *a, int *b)
{
    scanf("%d %d", a, b);
}

void compute(int *a, int *b)
{
    *a=*a+1;
    *b=*b+1;
}

void output(int *a, int *b)
{
    printf("\n%d %d", *a, *b);
}
int main()
{
    int a,b;
    input(&a, &b);
    compute(&a, &b);
    output(&a, &b);
}