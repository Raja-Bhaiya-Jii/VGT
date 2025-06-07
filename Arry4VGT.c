#include <stdio.h>

int main() {
    int a[5], i, j;

    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++) {
        printf("Number %d: ", i + 1);
        if (scanf("%d", &a[i]) != 1) {  // Fix: Validate input
            printf("Invalid input. Please enter a number.\n");
            return 1; // Exit if input is invalid
        }
    }

    printf("\nChecking even/odd status:\n");
    for (i = 0; i < 5; i++) {
        j = a[i] % 2;
        if (j == 0) {
            printf("Number %d is even.\n", a[i]);
        } else {
            printf("Number %d is odd.\n", a[i]);
        }
    }

    return 0;
}