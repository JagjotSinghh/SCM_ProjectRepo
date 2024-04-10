#include <stdio.h>

int main() {
    double num;

    // Input
    printf("Enter a number: ");
    scanf("%lf", &num);

    // Check if the number is positive, negative, or zero
    if (num > 0)
        printf("%.2lf is positive.\n", num);
    else if (num < 0)
        printf("%.2lf is negative.\n", num);
    else
        printf("%.2lf is zero.\n", num);

    return 0;
}