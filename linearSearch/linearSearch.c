#include<stdio.h>

int main()
{  
    int num; // number of elements
    int i, searchNum, flag = 0; // loop variable, number to search, flag to indicate if element is found
 
    printf("Enter the number of elements ");
    scanf("%d", &num);
    int array[num]; // array to store elements

    printf("Enter the elements \n");
    for (i = 0; i < num; i++)
        scanf("%d", &array[i]);
    
 
    printf("Enter the element to be searched ");
    scanf("%d", &searchNum);

    for (i = 0; i < num ; i++)  // loop goes through each element one by one and checks if the desired number is present
    {
        if (searchNum == array[i] )
        {
            flag = 1; // element found
            break;
        }
    }
    if (flag == 1)
        printf("Element is present in the array at position %d",i+1);
    else
        printf("Element is not present in the array\n");
}