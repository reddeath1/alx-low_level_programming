#include <unistd.h>
#include "main.h"

/**
 * main - body
 * Decription: putchar
 * Return: always (success)
 */

int main(void)
{
	char str =  "_putchar";
	int i;

	while(i = 0;i < strlen(str) -1){
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');	

	return (0);
}

