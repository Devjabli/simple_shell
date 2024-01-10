#include "shell.h"

/**
 * _strcat - it concatenates the distinate and source
 * @dest: pointer destination
 * @src: pointer source
 *
 * Return: return destination as a full string from dest and src
*/

char *_strcat(char *dest, char *src)
{
	while (*dest != '\0')
		dest++;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest);
}

/**
 * _strcpy - it copies the source to destination string
 * @dest: destination pointer string
 * @src: source pointer string
 *
 * Return: return the first destination as coped
*/

char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}


/**
 * _strncmp - compare string with size
 * @s1: string one
 * @s2: string two
 * @n: initializer
 *
 * Return: 0
*/


int _strncmp(const char *s1, const char *s2, size_t n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		if (*s1 == '\0')
			return (0);
		s1++;
		s2++;
		n--;
	}
	return (0);
}

/**
 * rev_str - return reverse string
 * @str: string pointer
 * @len: length of string
 *
*/

void rev_str(char *str, int len)
{
	char tp;
	int st = 0, i;
	int end = len - 1;

	for (i = 0; st < end; i++)
	{
		tp = str[st];
		str[st] = str[end];
		str[end] = tp;
		st++;
		end--;
	}
}
