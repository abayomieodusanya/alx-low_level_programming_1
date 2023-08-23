#include <stdio.h>

/**
 * print_rev - Prints a string in reverse, followed by a new line.
 * @s: The string to be printed in reverse.
 */
void print_rev(char *s)
{
    int length = 0;

    // Calculate the length of the string
    while (s[length] != '\0')
    {
        length++;
    }

    // Print the string in reverse
    for (int i = length - 1; i >= 0; i--)
    {
        putchar(s[i]);
    }

    // Print a new line
    putchar('\n');
}

int main()
{
    char myString[] = "Hello, World!";
    
    print_rev(myString); // Call the function to print the string in reverse
    
    return 0;
}
