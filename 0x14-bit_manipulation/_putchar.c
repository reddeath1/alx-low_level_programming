#include <unistd.h>

/**
 * _putchar - writes the character to stdout
 * @c: Character to print
 *
 * Return: On success 1 or -1 on failure.
 */
int _putchar(char c)
{
  return (write(1, &c, 1));
}
