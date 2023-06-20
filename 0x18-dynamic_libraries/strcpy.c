/**
 * _strcpy - Main function that copies the string pointed to by src
 * @dest: The pointer to destination of string
 * @src: The pointer to source string to copy from
 * Return: (Always pointer to dest)
 */
char *_strcpy(char *dest, char *src)
{
	char *c = dest;

	while (*src)
		*dest++ = *src++;
	return (c);
}
