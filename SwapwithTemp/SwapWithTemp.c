#include <stdio.h>
int main()
{
    int a, b, temp;
    printf("Enter two integers ");
    scanf("%d%d", &a, &b);
    
    temp = a;
    a = b;
    b = temp;
    printf("After Swapping\nFirst variable = %d\nSecond variable = %d", a, b);
    printf("\n");
    return 0;
}
