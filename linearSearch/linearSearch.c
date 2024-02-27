#include<stdio.h>
int main()
{  
    int num;
    int i,  searchNum, flag = 0;
 
    printf("Enter the number of elements ");
    scanf("%d", &num);
    int array[num];

    printf("Enter the elements \n");
    for (i = 0; i < num; i++)
        scanf("%d", &array[i]);
    
 
    printf("Enter the element to be searched ");
    scanf("%d", &searchNum);

    for (i = 0; i < num ; i++)  //loop goes through each element one by one and check if desired number is present
    {
        if (searchNum == array[i] )
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
        printf("Element is present in the array at position %d",i+1);
    else
        printf("Element is not present in the array\n");
}