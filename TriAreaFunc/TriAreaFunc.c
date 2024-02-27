#include <stdio.h>
#include <math.h>

int input()
{
    int side;
    printf("Enter the sides of the traingle\n");
    scanf("%d", &side);
    return side;
}

float calculate(int a, int b, int c)
{
    float s, area;
    s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    return area;
}

void output(float area)
{
    printf("Area of the triangle is = %0.2f", area);
    printf("\n");
}

int main()
{
    int a, b, c;

    a = input();
    b = input();
    c = input();
    output(calculate(a, b, c));
    
    return 0;
}
