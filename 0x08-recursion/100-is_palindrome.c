#include "main.h"

int strlen_recursion(char *s);
int _palindrome(char *s, int len);

/**
 *strlen_recursion - A function to obtain the length of the string s
 * @s: A string to calculate length
 * Return: the length of string s
 */
int strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (strlen_recursion(s + 1) + 1);
}

/**
 * is_palindrome - A checker function that checks if s is a palindrome string
 * @s: An inpuit string
 * Return: 1 if is string is a palindrome or 0 in otherwise
 */
int is_palindrome(char *s)
{
	int len;

	len = strlen_recursion(s);
	if (len <= 1)
		return (1);
	return (_palindrome(s, len));
}

/**
 * _palindrome - A helper function with a revesed string
 * @s: An input string
 * @len: the length of the string s
 * Return: A reverse string
 */
int _palindrome(char *s, int len)
{
	if (len <= 1)
		return (1);
	else if (*s == *(s + len - 1))
	{
		return (_palindrome(s + 1, len - 2));
	}
	else
		return (0);

}
