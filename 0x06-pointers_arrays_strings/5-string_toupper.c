#include "main.h"

/**
 * string_toupper - Changes all lowercase letters of a string to uppercase
 * @s: Input string.
 *
 * Return: The pointer to dest.
 */
char *string_toupper(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
	{
		if (*(s + count) >= 'a' && *(s + count) <= 'z')
		{
			*(s + count) = *(s + count) - 32;
		}
		count++;
	}

	return (s);
}
