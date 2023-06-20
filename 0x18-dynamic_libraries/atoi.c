#include "main.h"

/**
 * _atoi - Main function that converts string to integer
 * @s: The input string
 * Return: (integer from conversion)
 */

int _atoi(char *s)
{
	int sign = 1;
	unsigned int sum = 0;
	char flag = 0;

	while (*s)
	{
		if (*s == '-')
			sign *= -1;

		if (*s >= '0' && *s <= '9')
		{
			flag = 1;
			sum = sum * 10 + *s - '0';
		}

		else if (flag)
			break;
		s++;
	}

	if (sign < 0)
		sum = (-sum);

	return (sum);
}
