#include "main.h"
/**
 * puts_half - a function that prints half of a string
 * if odd len, n = (length_of_the_string - 1) / 2
 * @str: input
 * Return: half of input
 */
void puts_half(char *str)
{
	int c, n, longi;

	longi = 0;

	for (c = 0; str[c] != '\0'; a++)
		longi++;

	n = (longi / 2);

	if ((longi % 2) == 1)
		n = ((longi + 1) / 2);

	for (c = n; str[c] != '\0'; a++)
		_putchar(str[c]);
	_putchar('\n');
}
