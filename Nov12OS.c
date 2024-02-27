#include <stdio.h>
#include<sys/types.h>
#include<unistd.h>

int main()
{
fork();
fork();
printf("Hellow world! \n");
printf("What is your name \n");
return 0;
}
