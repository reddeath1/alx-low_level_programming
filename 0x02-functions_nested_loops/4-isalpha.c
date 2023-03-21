#include "main.h"

/**
 * _isalpha - Check
 * @i: input 
 * Description: function returns 1 if the character is a
 * character, lowercase or uppercase.
 * Return: 1 or 0.
 */
int _isalpha(int i)
{
	char islower, isupper;
	int ischar = 0;

	for (islower = 'a'; islower <= 'z'; islower++)
		for (isupper = 'A'; isupper <= 'Z'; isupper++)
			if (i == islower || i == isupper)
				ischar = 1;
	return (ischar);
}
