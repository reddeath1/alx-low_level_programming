#include "main.h"

/**
 * _isdigit - checking digits
 * @c: arg
 * Return: always
 */

int _isdigit(int c)
{
	int digit = 0;
	char i = '0';

	for(; i <= '9'; i++)
		if(i == c)
		{
			digit = 1;
			break;
		}

	return (digit);
}
