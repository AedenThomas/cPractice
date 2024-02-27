#include <stdio.h>
#include<math.h>

void ipt(int *a, int *b, int *c)
{
    printf("enter all the side of the triangle\n");
    scanf("%d %d %d", a, b, c);
 
}
int main()
{
    int a, b, c;
    float sum, area;
    
    ipt(&a, &b, &c);
    sum = ((a) + (b) + (c)) / 2;
    area = sqrt(sum * (sum - a)*(sum - b)*(sum - c));
    printf("the area of the triangle is %f\n", area);

    return 0;
}
