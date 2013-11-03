#include <iso646.h>
#include <stdio.h>

#include "util.h"

int main(int argc, const char *argv[]) {
    float a, b;

    printf("Enter a number: ");
    scanf("%f", &a);
    printf("Enter a number: ");
    scanf("%f", &b);

    printf("Sum: %f\n", add(a, b));
    printf("Difference: %f\n", subtract(a, b));

    return 0;
}
