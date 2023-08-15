#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints all possible combinations of two two-digit numbers.
 *              The numbers range from 0 to 99.
 *              The two numbers are separated by a space.
 *              All numbers are printed with two digits.
 *              The combination of numbers is separated by a comma,
 *              followed by a space.
 *              The combinations of numbers are printed in ascending order.
 *              00 01 and 01 00 are considered as the same combination
 *              of the numbers 0 and 1.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int num1, num2;

    for (num1 = 0; num1 < 100; num1++)
    {
        for (num2 = 0; num2 < 100; num2++)
        {
            if (num1 < num2)
            {
                putchar((num1 / 10) + '0'); /* Print tens digit of first number */
                putchar((num1 % 10) + '0'); /* Print ones digit of first number */
                putchar(' '); /* Print space */
                putchar((num2 / 10) + '0'); /* Print tens digit of second number */
                putchar((num2 % 10) + '0'); /* Print ones digit of second number */

                if (num1 != 98 || num2 != 99)
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

