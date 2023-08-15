#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints all possible different combinations of two digits.
 *              Numbers must be separated by a comma and a space.
 *              The two digits must be different.
 *              01 and 10 are considered the same combination of the digits 0 and 1.
 *              Print only the smallest combination of two digits.
 *              Numbers should be printed in ascending order, with two digits.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int num1, num2;

    for (num1 = 0; num1 < 10; num1++)
    {
        for (num2 = num1 + 1; num2 < 10; num2++)
        {
            putchar(num1 + '0'); /* Print the first digit */
            putchar(num2 + '0'); /* Print the second digit */

            if (num1 != 8 || num2 != 9)
            {
                putchar(','); /* Print comma */
                putchar(' '); /* Print space */
            }
        }
    }

    putchar('\n'); /* Print a newline at the end */

    return (0);
}

