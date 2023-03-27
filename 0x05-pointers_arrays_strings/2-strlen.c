#include "main.h"
#include <string.h>
/**
 * _strlen - main function
 * @str: agr
 * Return: always
 */

int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;

	return (i);
}
