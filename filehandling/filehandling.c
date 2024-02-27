#include <stdio.h>

int main()
{
    FILE *fp; // File pointer
    char name[100]; // Array to store name
    char prof[100]; // Array to store profession
    int salary; // Variable to store salary

    fp = fopen("BMSCE.txt", "r"); // Open the file in read mode

    if (fp == NULL) {
        printf("error reading the file -->\n"); // Print error message if file cannot be opened
    }

    while (fscanf(fp, "%s %s %d", name, prof, &salary) != EOF) {
        printf("reading from the file------> name:%s profession:%s salary :%d \n", name, prof, salary);
    }

    fscanf(stdin, "%s %s %d", name, prof, &salary); // Read input from standard input
    printf("from standard input we have name:%s prof:%s salary:%d\n", name, prof, salary);

    fclose(fp); // Close the file

    return 0;
}