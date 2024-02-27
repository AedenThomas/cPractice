//Average using functions
#include <stdio.h>

int input()
{
	int a;

	scanf("%d", &a);
	return a;
}
float calculate(float n1, float n2, float n3)
{
	float average;
	average=(n1+n2+n3)/3;
	return average;
	
}
float output(float average)
{
	printf("%0.2f", average);
	printf("\n");
	return average;
}
int main()
{
	int n1, n2, n3;
	float avg;

	n1 = input();
	n2 = input();
	n3 = input();

	output(calculate(n1,n2,n3));
}






