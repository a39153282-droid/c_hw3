#include <stdio.h>

char changeCase(char ch)
{
    if (ch >= 'A' && ch <= 'Z') {
        return ch + ('a' - 'A');
    }

    if (ch >= 'a' && ch <= 'z') {
        return ch - ('a' - 'A');
    }

    return ch;
}

int main(void)
{
    char letter;

    printf("Enter a letter: ");
    if (scanf(" %c", &letter) != 1) {
        return 1;
    }

    printf("Result: %c\n", changeCase(letter));

    return 0;
}