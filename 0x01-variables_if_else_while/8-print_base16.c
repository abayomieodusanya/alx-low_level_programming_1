#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints all the numbers of base 16 in lowercase,
 *              followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char digit;

    for (digit = '0'; digit <= '9'; digit++)
    {
        putchar(digit); /* Print digits 0-9 */
    }

    for (digit = 'a'; digit <= 'f'; digit++)
    {
        putchar(digit); /* Print lowercase letters a-f */
    }

    putchar('\n'); /* Print a newline at the end */

    return (0);
}

