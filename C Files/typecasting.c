#include <stdio.h>

int main() {
    int a = 5, b = 2, c;
    float d;

    c = a / b;
    printf("%d\n", c);

    d = (float) a / b;
    printf("%f\n", d);

    return 0;
}