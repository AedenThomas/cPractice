#include<stdio.h>
int main()
{
	int m,n,i;
	printf("Enter m:");
	scanf("%d",&m);
	
	printf("Enter n:");
	scanf("%d",&n);
	
	for(i=m;i<=n;i++)
	{
	    if(i%2 == 0)
        {
		printf("%d \n",i);
        }
	}
	return 0;
}
	