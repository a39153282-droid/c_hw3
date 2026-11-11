#include <stdio.h>

void hanoi(int n, char from, char auxiliary, char to)
{
    if (n == 1) {
        printf("Move disk 1 from %c to %c\n", from, to);
        return;
    }

    hanoi(n - 1, from, to, auxiliary);

    printf("Move disk %d from %c to %c\n", n, from, to);

    hanoi(n - 1, auxiliary, from, to);
}

int main(void)
{
    int n;

    printf("Enter number of disks: ");

    if (scanf("%d", &n) != 1) {
        return 1;
    }

    if (n < 1) {
        printf("The number of disks must be at least 1.\n");
        return 1;
    }

    hanoi(n, 'A', 'B', 'C');

    return 0;
}