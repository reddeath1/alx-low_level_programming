#include "main.h"

/**
 * main - An entry point for the program to get header of ELF file
 * @argc: Number of arguments
 * @argv: Pointer to array of arguments
 * Return: (1 on success, error code on failure)
 */
int main(int argc, char *argv[])
{
	printf("argc:%d, argv:%p\n", argc, (void *)*argv);
	return (1);
}
