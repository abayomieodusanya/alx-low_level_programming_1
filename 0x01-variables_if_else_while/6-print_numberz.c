#include <unistd.h>

/**
 * _putchar - Custom putchar function
 * @c: The character to be printed
 *
 * Return: 1 on success, -1 on error
 */
int _putchar(char c)
{
	return write(1, &c, 1);
}

/**
 * main - Entry point of the program
 *
 * Description: Prints all single-digit numbers of base 10,
 * starting from 0, followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	_putchar('0' + 0);
	_putchar('1');
	_putchar('2');
	_putchar('3');
	_putchar('4');
	_putchar('5');
	_putchar('6');
	_putchar('7');
	_putchar('8');
	_putchar('9');
	_putchar('\n');

	return (0);
}

