#include <unistd.h>

/**
 * _putchar - Main function that writes the character c to stdout
 * @c: The character to print
 * Return: (On success 1 or 0 on faliure).
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
