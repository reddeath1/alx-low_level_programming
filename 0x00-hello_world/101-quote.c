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
	int len = strlen("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n");
	write(STDOUT_FILENO,"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",len);
	return (1);
}
