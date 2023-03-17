#include<stdio.h>
#include<unistd.h>
#include<string.h>

/**
 * main - main bloc
 *
 * Return: always
 */

int main(void)
{
	write(STDOUT_FILENO,
	      "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
	      61);
	return (1);
}
