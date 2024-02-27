#include<stdio.h>
int main()
{
    int i,n,flag=0;
    printf ("Enter a number");
    scanf ("%d",&n);
    for (i=2;i<=n/2;i++)
    {
        if(n%i==0)
        printf ("The number is Composite");
        flag=1;
    
    }
    if (flag==0)
    printf ("The number is Prime");
    printf("\n");

    return 0;
}
