#include <stdio.h>

typedef unsigned long int ULI;

int main() {
    ULI i, j;

    i = 1000000000;
    j = 2000000000;

    printf("Sum = %lu\n", i + j);

    return 0;
}