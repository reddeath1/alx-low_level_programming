#include <stdio.h>
#define LARGEST 10000000000
/**
 * main - main block
 * Description: Find and print the first 98 fib numbers starting with 1 and 2.
 * Numbers should be coma and space separated.
 * Return: always 0
 */
int main(void)
{
	long int fr1 = 0, bk1 = 1, fr2 = 0, bk2 = 2, h1, h2, h3;
	int count;

	printf("%lu, %lu, ", bk1, bk2);
	for (count = 2; count < 98; count++)
	{
		if (bk1 + bk2 > LARGEST || fr2 > 0 || fr1 > 0)
		{
			h1 = (bk1 + bk2) / LARGEST;
			h2 = (bk1 + bk2) % LARGEST;
			h3 = fr1 + fr2 + h1;
			fr1 = fr2, fr2 = h3;
			bk1 = bk2, bk2 = h2;
			printf("%lu%010lu", fr2, bk2);
		}
		else
		{
			h2 = bk1 + bk2;
			bk1 = bk2, bk2 = h2;
			printf("%lu", bk2);
		}
		if (count != 97)
			printf(", ");
	}
	printf("\n");
	return (0);
}
