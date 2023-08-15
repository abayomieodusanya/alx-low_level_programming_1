#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints all possible combinations of single-digit numbers.
 *              Numbers must be separated by a comma and a space.
 *              Numbers should be printed in ascending order.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int num;

    for (num = 0; num < 10; num++)
    {
        putchar(num + '0'); /* Print the digit */

        if (num != 9)
        {
            putchar(','); /* Print comma */
            putchar(' '); /* Print space */
        }
    }

    putchar('\n'); /* Print a newline at the end */

    return (0);
}

