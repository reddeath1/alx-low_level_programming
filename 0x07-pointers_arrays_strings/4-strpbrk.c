#include "main.h"
/**
 * _strpbrk - main func
 * @s: arg
 * @accept: aarg
 * Retuurn: always
 */

char *_strpbrk(char *s, char *accept)
{
	int i, x;
	char *v;

	i = 0;
	while (s[i] != '\0')
	{
		x = 0;
		while (accept[x] != '\0')
		{
			if (accept[x] == s[i])
			{
				v = &s[i];
				return (v);
			}
			x++;
		}
		i++;
	}

	return (0);
}
