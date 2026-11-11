#include <stdio.h>

long long lcm(int a, int b)
{
    long long first = a;
    long long second = b;

    if (first < 0) {
        first = -first;
    }
    if (second < 0) {
        second = -second;
    }

    if (first == 0 || second == 0) {
        return 0;
    }

    long long x = first;
    long long y = second;

    while (y != 0) {
        long long remainder = x % y;
        x = y;
        y = remainder;
    }

    return (first / x) * second;
}

int main(void)
{
    int a, b;

    printf("Enter two integers: ");
    if (scanf("%d %d", &a, &b) != 2) {
        return 1;
    }

    printf("LCM = %lld\n", lcm(a, b));

    return 0;
}