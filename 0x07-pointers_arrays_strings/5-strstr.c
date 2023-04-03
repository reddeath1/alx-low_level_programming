#include "main.h"
/**
 * *__strstr - main func
 * @haystack: arg
 * @needle: aarg
 * Return: always
 */

char *__strstr(char *haystack, char *needle)
{
	int i, x;
	char *v;

	i = 0;
	while (haystack[i] != '\0')
	{
		x = 0;
		while (needle[x] != '\0')
		{
			if (needle[x] == s[i])
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
