#include <stdio.h>

void display(int *x, int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("\nElement = %d", x[i]);
    }
}

int main() {
    int num[] = {2, 4, 56, 6, 7, 8, 9, 90};
    display(num, 6);
    return 0;
}
