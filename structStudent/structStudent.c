// This program stores information about students using a structure and
// calculates the student with the highest marks. It then displays the
// details of the student with the highest marks.

#include <stdio.h>

struct student {
    int roll;
    char firstName[50];
    char sec[5];
    char dept[3];
    int fees;
    int marks;
} s[2];

int main() {
    int i, highest;

    // Storing information for two students
    for (i = 0; i < 2; ++i) {
        scanf("%d", &s[i].roll);
        scanf("%s", s[i].firstName);
        scanf("%s", s[i].sec);
        scanf("%s", s[i].dept);
        scanf("%d", &s[i].fees);
        scanf("%d", &s[i].marks);
    }

    // Finding the student with the highest marks
    if (s[0].marks > s[1].marks) {
        highest = 0;
    } else {
        highest = 1;
    }

    // Displaying the details of the student with the highest marks
    printf("Student details who has scored the highest marks \n");
    printf("Roll number: %d\n", s[highest].roll);
    printf("Name: %s\n", s[highest].firstName);
    printf("Section: %s\n", s[highest].sec);
    printf("Department: %s\n", s[highest].dept);
    printf("Fees: %d\n", s[highest].fees);
    printf("Results: %d", s[highest].marks);

    return 0;
}
