#include <stdio.h>


void swap(int *a, int *b){
   int temp=0;
   temp=*a;
   *a=*b;
   *b=   temp;

}
int main()
{
   int a,b;
   scanf("%d %d", &a, &b);
   swap(&a, &b);
   printf("%d %d", a,b);
}

// #include <stdio.h> 
// int main()
// {
//    int x, y, temp;
 
//    scanf("%d%d", &x, &y);
 
//    printf("Before Swapping: x = %d, y = %d\n", x, y);   //x 1 y 2
 
//    temp = *(&x);  //value at address of x. temp=x
//    *(&x)=*(&y);
//    *(&y)=temp;
 
//    printf("After Swapping: x = %d, y = %d", x, y);
 
//    return 0;
// }
 