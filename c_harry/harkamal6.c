#include <stdio>.h
int main() {
    double num1, num2, num3;

    // Input
    printf("Enter three numbers: ");
    scanf("%lf %lf %lf", &num1, &num2, &num3);

    // Logic to find the smallest number
    if (num1 <= num2 && num1 <= num3)
        printf("%.2lf is the smallest number.\n", num1);
    else if (num2 <= num1 && num2 <= num3)
        printf("%.2lf is the smallest number.\n", num2);
    else
        printf("%.2lf is the smallest number.\n", num3);

    return 0;
}
