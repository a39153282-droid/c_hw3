#include <stdio.h>
#include <limits.h>

unsigned long long int fibonacci(unsigned int n)
{
    if (n == 0) {
        return 0;
    }

    unsigned long long int previous = 0;
    unsigned long long int current = 1;

    for (unsigned int i = 2; i <= n; ++i) {
        unsigned long long int next = previous + current;

        previous = current;
        current = next;
    }

    return current;
}

int main(void)
{
    unsigned int n;

    unsigned int maximumN = 1;
    unsigned long long int previous = 0;
    unsigned long long int current = 1;

    while (previous <= ULLONG_MAX - current) {
        unsigned long long int next = previous + current;

        previous = current;
        current = next;
        ++maximumN;
    }

    printf("Largest: F(%u) = %llu\n", maximumN, current);
    printf("Enter n (0 to %u): ", maximumN);

    if (scanf("%u", &n) != 1) {
        return 1;
    }

    if (n > maximumN) {
        printf("The result is too large.\n");
        return 1;
    }

    printf("F(%u) = %llu\n", n, fibonacci(n));

    return 0;
}