#include <stdio.h>

int convert(int n) {
    int binary = 0;
    int rem, i = 1;
    while (n != 0) {
        rem = n % 2;
        n /= 2;
        binary += rem * i;
        i *= 10;
    }
    return binary;
}

int main() {
    int n;
    printf("Enter a decimal number: ");
    scanf("%d", &n);
    printf("%d in decimal = %d in binary", n, convert(n));
    printf("\n");
    return 0;
}
