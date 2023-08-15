#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints all possible different combinations of three digits.
 *              Numbers must be separated by a comma and a space.
 *              The three digits must be different.
 *              012, 120, 102, 021, 201, 210 are considered the same
 *              combination of the three digits 0, 1, and 2.
 *              Print only the smallest combination of three digits.
 *              Numbers should be printed in ascending order, with three digits.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int num1, num2, num3;

    for (num1 = 0; num1 < 10; num1++)
    {
        for (num2 = num1 + 1; num2 < 10; num2++)
        {
            for (num3 = num2 + 1; num3 < 10; num3++)
            {
                putchar(num1 + '0'); /* Print the first digit */
                putchar(num2 + '0'); /* Print the second digit */
                putchar(num3 + '0'); /* Print the third digit */

                if (num1 != 7 || num2 != 8 || num3 != 9)
                {
                    putchar(','); /* Print comma */
                    putchar(' '); /* Print space */
                }
            }
        }
    }

    putchar('\n'); /* Print a newline at the end */

    return (0);
}

