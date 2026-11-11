#include <stdio.h>

double power(double base, int exponent)
{
    if (exponent == 1) {
        return base;
    }

    return base * power(base, exponent - 1);
}

int main(void)
{
    double base;
    int exponent;

    printf("Enter base and exponent: ");

    if (scanf("%lf %d", &base, &exponent) != 2) {
        return 1;
    }

    if (exponent < 1) {
        printf("Exponent must be at least 1.\n");
        return 1;
    }

    printf("Result: %g\n", power(base, exponent));

    return 0;
}