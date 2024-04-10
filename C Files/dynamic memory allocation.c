#include <stdio.h>
#include <stdlib.h>

int main() {
    int *i;
    float *a;
    struct emp {
        char name[20];
        int age;
        float sal;
    };
    struct emp *e;

    i = (int*) malloc(sizeof(int));
    a = (float*) malloc(sizeof(float));
    e = (struct emp *) malloc(sizeof(struct emp));

    return 0;
}