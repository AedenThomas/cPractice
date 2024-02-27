#include <stdio.h>

int main() {
    char s1[100], s2[100], i;

    // Read input string from user
    fgets(s1, sizeof(s1), stdin);

    // Copy s1 to s2 character by character
    for (i = 0; s1[i] != '\0'; i++) {
        s2[i] = s1[i];
    }

    s2[i] = '\0';

    // Print the copied string
    printf("%s", s2);

    // Calculate the length of the copied string
    for(i=0; s2[i]!='\0'; i++);

    // Print the length of the copied string
    printf("%d", i-1);

    return 0;
}
