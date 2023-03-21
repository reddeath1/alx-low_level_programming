#include <unistd.h>

/**
 * _islower - check the code.
 * @i - arg
 * Return: Always 0.
 */
int _islower(int i)
{
	char b;
	int islower = 0;

	for (b = 'a'; b <= 'z'; b++)
		if (b == i)
			islower = 1;
	
	return (0);
}
