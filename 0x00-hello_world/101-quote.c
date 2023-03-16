#include<stdio.h>
#include<unistd.h>
#include<string.h>

/**
 * main - main bloc
 *
 * REtur: always
 */

int main(void)
{

	int len = strlen("200~and that piece of art is useful\" - Dora Korpar, 2015-10-19");
	write(STDOUT_FILENO,"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",len);
	
	return (1);
}
